#ifndef CLTABRENDERERCLASSIC_H
#define CLTABRENDERERCLASSIC_H

#include "clTabRenderer.h"

class WXDLLIMPEXP_SDK clTabRendererClassic : public clTabRenderer
{
public:
    static void InitDarkColours(clTabColours& colours, const wxColour& activeTabBGColour);
    static void InitLightColours(clTabColours& colours, const wxColour& activeTabBGColour);

public:
    clTabRendererClassic();
    virtual ~clTabRendererClassic();
    void Draw(wxWindow* parent, wxDC& dc, const clTabInfo& tabInfo, const clTabColours& colours, size_t style);
    void DrawBottomRect(wxWindow* parent, clTabInfo::Ptr_t tabInfo, const wxRect& clientRect, wxDC& dc,
                        const clTabColours& colours, size_t style);
};

#endif // CLTABRENDERERCLASSIC_H
