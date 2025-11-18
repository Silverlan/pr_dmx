// SPDX-FileCopyrightText: (c) 2020 Silverlan <opensource@pragma-engine.com>
// SPDX-License-Identifier: MIT

import pragma.modules.dmx;

extern "C" {
void PR_EXPORT pragma_initialize_lua(Lua::Interface &l) { Lua::dmx::register_lua_library(l); }
};
