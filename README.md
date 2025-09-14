# seeedStudio_epaperHA

https://wiki.seeedstudio.com/xiao_075inch_epaper_panel_esphome

Code is derived from Demo #3, which displays weather info and the day's calendar.

Would have forked it, but couldn't see it on Seeedstudio's repos.

Using https://github.com/mampfes/hacs_waste_collection_schedule to get binformation from the source

## Home assistant integrations needed

Moon (HA built-in) - provides sensor.moon_phase

Weather (HA built-in) - should be installed by default.  Provides weather.forecast_home

Waste Collection Schedule - custom integration, needs HACS installed.  Provides sensor.bin_collection_sensor

Calendar - TBD

## Done:

Fixed issue with array out-of-bounds access displaying wrong data for day (used strftime instead).

Reduced font sizes for sensor data & date data; moved date to avoid overlap with dividing line.

Added (very) basic bin display - details upcoming bin type & days

Bin display now displays the next bin if it's tomorrow or today (parsed on device)

Units now supplied by Home Assistant weather.forecast_home attributes

Extended weather display using the MDI to show the standard set of weather types for HA.  Default for unknown type is still cloudy.

Added a battery indicator and code to return the glyph mapped to (uint8_t)0..100.  However, not currently certain the hw has a connection for battery level to an ADC. 

Added lunar phase display (WIP).  NB Needs "moon" integration (HA built-in) enabled to read sensor.moon_phase

## To do:

Ensure that date format is selected automatically (localisation settings)

Add bin display (if present) to the head of the events vector so there's no issues with displaying/moving calendar display when the binfo is visible.

Modify to use Google calendar (define in secrets.yaml?) or find some way of aggregating calendars for single-sensor querying.

Add an "upcoming events" section for a week's warning of impending all-day events.

Remove the battery display code because there's no battery info to display.

Redesign layout (use Figma?) to cleanly incorporate all elements.

Add a lunar phase display - use the HA integration coupled with the MDI phase icons

Add upcoming weather forecasr - next 4-5 hours

Add time of last update (can see if the battery has gone that way)

Remove the battery display - seems there is no hw to read battery state (1 pin + 2 resistors or 2 pins for I2C to the power controller - why on earth not?).  Would require hw mods to achieve.

Redo layout - experiment with Figma to redesign.

Add wind chill/"feels like" temperature alongside actual temp
