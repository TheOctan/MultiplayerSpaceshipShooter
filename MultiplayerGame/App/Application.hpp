#pragma once

#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "Resource.hpp"
#include "../Game/Player/Player.hpp"
#include "../Game/StateMachine/StateStack.hpp"
#include "../Game/Nodes/Audio.hpp"

#include <SFML/System/Time.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>


class Application
{
	public:
								Application();
		void					run();
		

	private:
		void					processInput();
		void					update(sf::Time dt);
		void					render();

		void					updateStatistics(sf::Time dt);
		void					registerStates();


	private:
		static const sf::Time	TimePerFrame;

		sf::RenderWindow		mWindow;
		TextureHolder			mTextures;
	  	FontHolder				mFonts;
		MusicPlayer				mMusic;
		SoundPlayer				mSounds;

		KeyBinding				mKeyBinding1;
		KeyBinding				mKeyBinding2;
		StateStack				mStateStack;

		sf::Text				mStatisticsText;
		sf::Time				mStatisticsUpdateTime;
		std::size_t				mStatisticsNumFrames;
};

#endif // APPLICATION_HPP
