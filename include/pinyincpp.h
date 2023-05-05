#ifndef PINYINCPP_H
#define PINYINCPP_H
#ifdef _WIN32
#ifdef PINYINCPP_LIBRARY
#define PINYIN_API __declspec(dllexport)
#else
#define PINYIN_API __declspec(dllimport)
#endif //PINYINCPP_LIBRARY
#else
#define PINYIN_API __attribute__((visibility("default")))
#endif //_WIN32
#ifdef __cplusplus

extern "C" {
#endif

PINYIN_API const char* Hanzi2Pinyin(const char *input);

#ifdef __cplusplus
}
#endif

#endif // PINYINCPP_H
