#pragma once
#include "SFML/Graphics.hpp"

const float window_width = 1600.f;
const float window_height = 900.f;
const std::string window_title = "SFML Simple Arcanoid"; //Breakout


const float bat_width = 180.f;
const float bat_height = 30.f;
const float bat_offset = 50.f;
const sf::Vector2f bat_start_pos{ 
	(window_width - bat_width) / 2,
	window_height - bat_offset - bat_height};
const sf::Color bat_color{sf::Color::White};
const float bat_speed = 1.f;