
#include <string>
#include <vector>

std::string RustSymbolDemangle(std::string &s, bool skipHashes = false);

// These are exposed for unit testing.
bool RSDParseComponents(std::string &inputString,
                        std::vector<std::string>& components);

std::string RSDDemangleComponents(std::vector<std::string>& components,
                                  bool skipHashes = false);

bool RSDIsRustHash(std::string &string);
