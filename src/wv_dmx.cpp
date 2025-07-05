// SPDX-FileCopyrightText: (c) 2020 Silverlan <opensource@pragma-engine.com>
// SPDX-License-Identifier: MIT

#include "ldmx.hpp"
#include <luainterface.hpp>
#include <pragma/pragma_module.hpp>

extern "C"
{
	void PRAGMA_EXPORT pragma_initialize_lua(Lua::Interface &l)
	{
		Lua::dmx::register_lua_library(l);
	}
};
