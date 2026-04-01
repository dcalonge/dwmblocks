static const Block blocks[] = {
//   Icon    Command                          Update Interval     Update Signal
    { "", "/home/daniel/mis_repos/dwmblocks/blocks/checkup",                 3660,               30 },
    { "",    "/home/daniel/mis_repos/dwmblocks/blocks/mic",                               0,                15 },
    { "",    "/home/daniel/mis_repos/dwmblocks/blocks/volume",                               0,                10 },
    { "   ",    "/home/daniel/mis_repos/dwmblocks/blocks/brightness",                           0,                20 },
    { "",    "/home/daniel/mis_repos/dwmblocks/blocks/bluetooth",                               0,                5 },
    { "   ",    "/home/daniel/mis_repos/dwmblocks/blocks/wifi",                              2,               0 },
    { "   ",    "/home/daniel/mis_repos/dwmblocks/blocks/battery",                              2,               0 },
    { "   ",    "date '+%H:%M %d/%m '",        30,                0 },
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "";
static unsigned int delimLen = 5;
