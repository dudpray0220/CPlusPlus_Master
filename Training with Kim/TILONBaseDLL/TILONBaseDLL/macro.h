#ifdef TILON_API_EXPORT
#define BASE_API __declspec(dllexport)
#else
#define BASE_API __declspec(dllimport)
#endif

#define interface struct

#define TILONNAMESPACE namespace TILON {
#define TILONNAMESPACEEND }