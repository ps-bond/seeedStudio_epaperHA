#pragma once
#include <map>
#include <string>

// Map of Home Assistant lunar phases to MDI Unicode codepoints
// Reference: https://www.home-assistant.io/integrations/moon/
// and https://pictogrammers.com/library/mdi/icon/moon-waning-crescent/
//
// Home Assistant lunar phases:
// 'new_moon', 'waxing_crescent', 'first_quarter', 'waxing_gibbous',
// 'full_moon', 'waning_gibbous', 'last_quarter', 'waning_crescent'
//
// MDI icons:
// new_moon: mdi:moon-new (\U000F0F1A)
// waxing_crescent: mdi:moon-waxing-crescent (\U000F0F1B)
// first_quarter: mdi:moon-first-quarter (\U000F0F1C)
// waxing_gibbous: mdi:moon-waxing-gibbous (\U000F0F1D)
// full_moon: mdi:moon-full (\U000F0F1E)
// waning_gibbous: mdi:moon-waning-gibbous (\U000F0F1F)
// last_quarter: mdi:moon-last-quarter (\U000F0F20)
// waning_crescent: mdi:moon-waning-crescent (\U000F0F21)

static const std::map<std::string, const char*> lunar_phase_icon_map = {
    {"new_moon", "\U000F0F64"},
    {"waxing_crescent", "\U000F0F67"},
    {"first_quarter", "\U000F0F61"},
    {"waxing_gibbous", "\U000F0F68"},
    {"full_moon", "\U000F0F62"},
    {"waning_gibbous", "\U000F0F66"},
    {"last_quarter", "\U000F0F63"},
    {"waning_crescent", "\U000F0F65"}
};

// Helper: get icon for a given lunar phase string
inline const char* get_lunar_phase_icon(const std::string& phase) {
    auto it = lunar_phase_icon_map.find(phase);
    if (it != lunar_phase_icon_map.end()) {
        return it->second;
    }
    // Default to new moon if unknown
    return (lunar_phase_icon_map.at("new_moon"));
}
