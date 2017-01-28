/* Ares-GetVFunc */
#pragma once

/* GetVFunc */
template< typename Fn >
inline Fn GetVFunc(const void* v, int i) {
	return (Fn)*(*(const void***)v + i);
}
