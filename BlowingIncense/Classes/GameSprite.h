//
//  GameSprite.h
//  BlowingIncense
//
//  Created by wood on 8/9/13.
//
//

#ifndef __BlowingIncense__GameSprite__
#define __BlowingIncense__GameSprite__

#include "cocos2d.h"
#include <iostream>

using namespace cocos2d;
class GameSprite :public CCSprite{
public:
    CC_SYNTHESIZE(CCPoint, _nextPosition, NextPosition);
    CC_SYNTHESIZE(CCPoint, _vector, Vector);
    //CC_SYNTHESIZE(CCTouch, _touch, Touch);
    
    CCTouch* _touch;
    
    GameSprite(void);
    ~GameSprite(void);
    
    static GameSprite* gameSpriteWithFile(const char * pszFileName);
    
    virtual void setPosition(const CCPoint& pos);
    float radius(void);
};

#endif /* defined(__BlowingIncense__GameSprite__) */
