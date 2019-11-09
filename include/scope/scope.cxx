#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>

namespace deplog
{
    /**
     * @brief check if there exist "#pragma keyword" statment in current scanned line
     * @param line current scanned line
     * @param keyword keyword
     * @return is statment exist
    */
    const bool check_pragma(const std::string& line, const std::string& keyword);
    /**
     * @brief extract single scope from content
     * @param content code content
     * @return scope
    */
    std::string scope_extract(const std::string& content);
    /**
     * @brief extract multiple code scopes
     * @param filename input file path
     * @return scope collection
    */
    std::vector<std::string> scopes_extract(const std::string& filename);
}

std::vector<std::string> deplog::scopes_extract(const std::string& filename)
{
    std::vector<std::string> res;
    std::ifstream file(filename);
    if (!file.is_open())
    {
        fprintf(stderr, "can not open file in %s\r\n", filename.c_str());
        return res;
    }
    std::string line;
    std::string content;
    bool flag_collect_content = false;
    while (std::getline(file, line))
    {
        if (flag_collect_content)
        {
            if (check_pragma(line, "enddep"))
            {
                flag_collect_content = false;
                res.push_back(scope_extract(content));
            }
            else
                content += line + "\n";
        }
        else if (check_pragma(line, "deplog"))
        {
            flag_collect_content = true;
            content = "";
        }
    }
    file.close();
    if (res.empty())
        fprintf(stderr, "no deplog scope found in file %s, use #pragma deplog/enddep pairs to mark scopes", filename.c_str());
    return res;
}

const bool deplog::check_pragma(const std::string& line, const std::string& keyword)
{
    int state = 0;
    std::string tmpStr;
    for (int i = 0; i < line.size(); i++)
    {
        if (state == 5)
        {
            if (std::isalpha(line[i]))
            {
                tmpStr += line[i];
                if (i == line.size() - 1)
                    if (!tmpStr.compare(keyword))
                        return true;
                    else
                        return false;
            }
            else
            {
                if (!tmpStr.compare(keyword))
                    return true;
                else
                    return false;
            }
        }
        else if (state == 4 && std::isalpha(line[i]))
        {
            state = 5;
            tmpStr = line[i];
        }
        else
        {
            switch (line[i])
            {
            case '#':
                if (state == 0)
                    state = 1;
                else
                    return false;
                break;
            case 'p':
                if (state != 1)
                    return false;
                break;
            case 'r':
                if (state != 1)
                    return false;
                break;
            case 'a':
                if (state == 1)
                    state = 2;
                else if (state = 2)
                    state = 3;
                else
                    return false;
                break;
            case 'g':
                if (state != 2)
                    return false;
                break;
            case 'm':
                if (state != 2)
                    return false;
                break;
            case ' ':
                if (state == 0 || state == 4)
                { /* do nothine */ }
                else if (state == 3)
                    state = 4;
                else
                    return false;
                break;
            case '\t':
                if (state == 0 || state == 4)
                { /* do nothine */ }
                else if (state == 3)
                    state = 4;
                else
                    return false;
                break;
            default:
                return false;
                break;
            }
        }
    }
    return false;
}

std::string deplog::scope_extract(const std::string& content) { return content; }