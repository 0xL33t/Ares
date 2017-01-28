/* Ares-Absolute-Address */
#pragma once 

/* GetAbsoluteAddress */
inline const uintptr_t GetAbsoluteAddress(uintptr_t instruction_ptr, int offset, int size) {
	return instruction_ptr + *reinterpret_cast<uint32_t*>(instruction_ptr + offset) + size;
};

/* GetAbsoluteAddress */
template <typename T> inline T* GetAbsoluteAddress(uintptr_t instruction_ptr, int offset, int size) {
	return reinterpret_cast<T*>(instruction_ptr + *reinterpret_cast<uint32_t*>(instruction_ptr + offset) + size);
};