//
//  ShaderUtils.hpp
//  ShaderUtils4cocos3.5
//
//  Created by macuser on 16/7/11.
//
//

#ifndef ShaderUtils_hpp
#define ShaderUtils_hpp

#include "cocos2d.h"
#include "ui/CocosGUI.h"

USING_NS_CC;
using namespace ui;

class ShaderUtils{
public:
    static void convertToGraySprite(Sprite *pSprite);
    static void convertToNormalSprite(Sprite *pSprite);
    
    static void convertToGrayImageView(ImageView* pImageView);
    static void convertToNormalImageView(ImageView* pImageView);
};

#endif /* ShaderUtils_hpp */
