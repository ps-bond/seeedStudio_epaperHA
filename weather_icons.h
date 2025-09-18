// Map of Home Assistant wethar states to MDI Unicode codepoints
// Reference: https://www.home-assistant.io/integrations/weather
// and https://pictogrammers.com/library/mdi/icon/weather-cloudy

// Map between Home Assistant weather states & MDI codes
std::map<std::string, const char*> weather_icons {
    {"clear-night", "\U000F0594"}, // weather-night
    {"cloudy", "\U000F0590"}, // weather-cloudy
    {"fog", "\U000F0591"}, // weather-fog
    {"hail", "\U000F0592"}, // weather-hail
    {"lightning", "\U000F067E"}, // weather-lightning
    {"lightning-rainy", "\U000F067F"}, // weather-lightning-rainy
    {"partlycloudy", "\U000F0595"}, // weather-partly-cloudy
    {"pouring", "\U000F0596"}, // weather-pouring
    {"rainy", "\U000F0597"}, // weather-rainy
    {"snowy", "\U000F0598"}, // weather-snowy
    {"snowy-rainy", "\U000F0670"}, // weather-snowy-rainy
    {"sunny", "\U000F0599"}, // weather-sunny
    {"windy", "\U000F059D"}, // weather-windy
    {"windy-variant", "\U000F059E"}, // weather-windy-variant
    {"exceptional", "\U000F1C78"} // weather-hurricane-outline.  May not actually indicate a hurricane.
};

// Helper - get weather icon for a given state
const char* get_weather_icon(const std::string& state) {
    auto it = weather_icons.find(state);
    if (it != weather_icons.end()) {
        return it->second;
    }
    //default to cloudy if state unknown
    return weather_icons.at("cloudy");
}