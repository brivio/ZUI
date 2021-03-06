﻿#ifndef __BUTTON_H__
#define __BUTTON_H__
#include <ZUI.h>

//------Js

#define Js_Id_Button_normalimage    100
#define Js_Id_Button_hotimage       101
#define Js_Id_Button_pushedimage    102
#define Js_Id_Button_focusedimage   103
#define Js_Id_Button_disabledimage  104

/**按钮控件结构*/
typedef struct _ZButton
{
    ZuiRes m_ResNormal;     //正常状态
    ZuiRes m_ResHot;        //高亮状态
    ZuiRes m_ResPushed;     //按下状态
    ZuiRes m_ResFocused;    //焦点图片
    ZuiRes m_ResDisabled;   //非激活状态

    ZuiColor m_ColorNormal;     //正常状态
    ZuiColor m_ColorHot;        //高亮状态
    ZuiColor m_ColorPushed;     //按下状态
    ZuiColor m_ColorFocused;    //焦点图片
    ZuiColor m_ColorDisabled;   //非激活状态

    int type;
    ZCtlProc old_call;
    ZuiAny old_udata;
}*ZuiButton, ZButton;
ZEXPORT ZuiAny ZCALL ZuiButtonProc(ZuiInt ProcId, ZuiControl cp, ZuiButton p, ZuiAny Param1, ZuiAny Param2, ZuiAny Param3);


#endif	//__BUTTON_H__
