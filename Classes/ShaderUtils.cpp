//
//  ShaderUtils.cpp
//  ShaderUtils4cocos3.5
//
//  Created by macuser on 16/7/11.
//
//

#include "ShaderUtils.hpp"
#include "ui/shaders/UIShaders.h"

void ShaderUtils::convertToGraySprite(Sprite *pSprite){
    auto program = GLProgram::createWithByteArrays(ccPositionTextureColor_noMVP_vert, ccUIGrayScale_frag);
    auto programState = GLProgramState::getOrCreateWithGLProgram(program);
    pSprite->setGLProgramState(programState);
}

void ShaderUtils::convertToNormalSprite(Sprite *pSprite){
    //"ShaderPositionTextureColor_noMVP"
    auto programState = GLProgramState::getOrCreateWithGLProgramName(GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP);
    //typedef uint32_t GLuint;
    programState->setUniformTexture("u_texture", pSprite->getTexture()->getName());
    programState->getGLProgram()->updateUniforms();
    pSprite->setGLProgramState(programState);
}

void ShaderUtils::convertToGrayImageView(ImageView* pImageView){
    ((Scale9Sprite *)(pImageView->getVirtualRenderer()))->setState(Scale9Sprite::State::GRAY);
}

void ShaderUtils::convertToNormalImageView(ImageView* pImageView){
    ((Scale9Sprite *)(pImageView->getVirtualRenderer()))->setState(Scale9Sprite::State::NORMAL);
}