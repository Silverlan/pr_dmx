// SPDX-FileCopyrightText: (c) 2020 Silverlan <opensource@pragma-engine.com>
// SPDX-License-Identifier: MIT

export module pragma.modules.dmx;

export import pragma.lua;

export namespace Lua
{
	namespace dmx
	{
		void register_lua_library(Lua::Interface &l);
	};
};
