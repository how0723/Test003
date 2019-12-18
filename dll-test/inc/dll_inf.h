#ifndef _CHTX_AFCTL_H_
#define _CHTX_AFCTL_H_

#ifdef DLL1_EXPORTS
#define CHTX_ALGENGINE_API __declspec(dllexport)
#else
#define CHTX_ALGENGINE_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif

    // =======================
    // ==函数名称：获取版本号
    // ==功能描述：
    // ==参数:   无
    // ==返回值：版本号
    // =======================
    CHTX_ALGENGINE_API const char* getVersion();

#ifdef __cplusplus
}
#endif

#endif // _CHTX_AFCTL_H_

