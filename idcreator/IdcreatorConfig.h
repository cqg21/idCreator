/***********************************************************************
 *                              _ooOoo_
 *                             o8888888o
 *                             88" . "88
 *                             (| -_- |)
 *                              O\ = /O
 *                          ____/`---'\____
 *                        .   ' \\| |// `.
 *                         / \\||| : |||// \
 *                       / _||||| -:- |||||- \
 *                         | | \\\ - /// | |
 *                       | \_| ''\---/'' | |
 *                        \ .-\__ `-` ___/-. /
 *                     ___`. .' /--.--\ `. . __
 *                  ."" '< `.___\_<|>_/___.' >'"".
 *                 | | : `- \`.;`\ _ /`;.`/ - ` : | |
 *                   \ \ `-. \_ __\ /__ _/ .-` / /
 *           ======`-.____`-.___\_____/___.-`____.-'======
 *                              `=---='
 *           .............................................
 *                    佛祖镇楼                  BUG辟易
 *            佛曰:
 *                    写字楼里写字间，写字间里程序员；
 *                    程序人员写程序，又拿程序换酒钱。
 *                    酒醒只在网上坐，酒醉还来网下眠；
 *                    酒醉酒醒日复日，网上网下年复年。
 *                    但愿老死电脑间，不愿鞠躬老板前；
 *                    奔驰宝马贵者趣，公交自行程序员。
 *                    别人笑我忒疯癫，我笑自己命太贱；
 *                    不见满街漂亮妹，哪个归得程序员？
 * ==========================================================================
 *
 * this software or lib may be copied only under the terms of the gnu general
 * public license v3, which may be found in the source kit.
 *
 *       Filename:  IdcreatorConfig.h
 *        Created:  2015年03月03日 11时25分07秒
 *         Author:  Seapeak.Xu (www.94geek.com), xvhfeng@gmail.com
 *        Company:  Tencent Literature
 *         Remark:
 *
 ****************************************************************************/
#ifndef _idcreatorCONFIG_H_
#define _idcreatorCONFIG_H_
#ifdef __cplusplus
extern "C" {
#endif


#include <stdlib.h>
#include <stdio.h>

#include "spx_types.h"

    struct IdcreatorConfig{
        SpxLogDelegate *log;
        string_t ip;
        int port;
        int http_port;

        //web server
        int new_http_port;
        int retry_times;
        int context_pool_size;

        u32_t connectTimeout;
        u64_t stackSize;
        u32_t serverContextSize;
        string_t logpath;
        string_t logprefix;
        string_t id_state_file;
        u64_t logsize;
        i32_t loglevel;
        bool_t daemon;
        u32_t waitting;
        u32_t timeout;
        u32_t mid;
    };


void *idcreatorConfigInit(SpxLogDelegate *log,err_t *err);
void idcreatorConfigParser(string_t line,void *config,err_t *err);



#ifdef __cplusplus
}
#endif
#endif
