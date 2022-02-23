#pragma once

template<typename T>
using EnableIfXLOPER = std::enable_if_t<std::is_same_v<XLOPER, T> || std::is_same_v<XLOPER12, T>>