#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "GameSprite.h"

#define GOAL_WIDTH 400

enum {
    kPlayer1Tag,
    kPlayer2Tag
};

using namespace cocos2d;

class GameLayer : public cocos2d::CCLayer
{
    GameSprite * _player1;
	GameSprite * _player2;
	GameSprite * _ball;
    
	CCArray * _players;
    CCLabelTTF * _player1ScoreLabel;
    CCLabelTTF * _player2ScoreLabel;
    
    CCSize _screenSize;
	
    int _player1Score;
    int _player2Score;
    
    void playerScore (int player);

public:
    // Method 'init' in cocos2d-x returns bool, instead of 'id' in cocos2d-iphone (an object pointer)
    virtual bool init();

    // there's no 'id' in cpp, so we recommend to return the class instance pointer
    static cocos2d::CCScene* scene();
    
    // preprocessor macro for "static create()" constructor ( node() deprecated )
    CREATE_FUNC(GameLayer);
    
    GameLayer();
    ~GameLayer();
    
    void ccTouchesBegan(CCSet* pTouches, CCEvent* event);
    void ccTouchesMoved(CCSet* pTouches, CCEvent* event);
    void ccTouchesEnded(CCSet* pTouches, CCEvent* event);
    void update (float dt);
};

#endif // __HELLOWORLD_SCENE_H__
