#pragma once
#ifndef GAMESTATE_HPP
#define GAMESTATE_HPP


/////////////////////////////////////////////////////////////////////
// Change this class to a gameState class - http://gamedev.stackexchange.com/questions/13244/game-state-management-techniques //
////////////////////////////////////////////////////////////////////
namespace t2d {

	// An enum class that holds the game states.
	enum class GameState
	{
		PLAY,
		PAUSE,
		MENU,
		OPTIONS,
		QUIT
	};
}
#endif
