#pragma once

#ifndef GAMESTATE_HPP
#define GAMESTATE_HPP

#include "../State.hpp"
#include "../../World.hpp"
#include "../../Player/Player.hpp"

#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>


class GameState : public State
{
public:
	GameState(StateStack& stack, Context context);

	virtual void		draw();
	virtual bool		update(sf::Time dt);
	virtual bool		handleEvent(const sf::Event& event);


private:
	World				mWorld;
	Player				mPlayer;
};

#endif // GAMESTATE_HPP