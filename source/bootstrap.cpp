#include "fmt/color.h"

auto main() -> int
{
    fmt::print(fg(fmt::color::coral), "Hello World!");
    return 0;
}