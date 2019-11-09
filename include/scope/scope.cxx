#include <string>
#include <vector>

namespace deplog
{
    /**
     * @brief check if there exist "#pragma deplog" statment in current scanned line
     * @param line current scanned line
     * @return is statment exist
    */
    inline bool check_pragma_deplog(const std::string& line);
    /**
     * @brief check if there exist "#pragma enddep" statment in current scanned line
     * @param line current scanned line
     * @return is statment exist
    */
    inline bool check_pragma_enddep(const std::string& line);
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
    
}