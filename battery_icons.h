#pragma once
#include <map>
#include <cstdint>

// Unicode codepoints for MDI battery icons (as used in YAML)
// 0: outline, 10, 20, ..., 100
static const std::map<uint8_t, const char*> battery_icon_map = {
    {0,   "\U000F0083"}, // Battery alert
    {10,  "\U000F007A"},
    {20,  "\U000F007B"},
    {30,  "\U000F007C"},
    {40,  "\U000F007D"},
    {50,  "\U000F007E"},
    {60,  "\U000F007F"},
    {70,  "\U000F0080"},
    {80,  "\U000F0081"},
    {90,  "\U000F0082"},
    {100, "\U000F0079"}
};

// Helper: get icon for a given battery level (0-100)
inline const char* get_battery_icon(uint8_t level) {
    if (level >= 95) return battery_icon_map.at(100);
    if (level >= 85) return battery_icon_map.at(90);
    if (level >= 75) return battery_icon_map.at(80);
    if (level >= 65) return battery_icon_map.at(70);
    if (level >= 55) return battery_icon_map.at(60);
    if (level >= 45) return battery_icon_map.at(50);
    if (level >= 35) return battery_icon_map.at(40);
    if (level >= 25) return battery_icon_map.at(30);
    if (level >= 15) return battery_icon_map.at(20);
    if (level >= 5)  return battery_icon_map.at(10);
    return battery_icon_map.at(0);
}
