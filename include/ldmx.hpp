// SPDX-FileCopyrightText: (c) 2020 Silverlan <opensource@pragma-engine.com>
// SPDX-License-Identifier: MIT

#ifndef __LDMX_HPP__
#define __LDMX_HPP__

namespace Lua
{
	class Interface;
	namespace dmx
	{
		void register_lua_library(Lua::Interface &l);
	};
};

#endif
