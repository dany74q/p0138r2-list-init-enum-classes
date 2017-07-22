#include <cstdint>

namespace P0138R2 {

// We can list-init enum classes that are type-specified.
enum class Gadget : uint32_t {};

}

int main() {
	// This still won't compile
	//P0138R2::Gadget gadget = 5;
	// But this will
	P0138R2::Gadget gadget{ 5 };
}