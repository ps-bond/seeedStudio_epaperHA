# seeedStudio_epaperHA

https://wiki.seeedstudio.com/xiao_075inch_epaper_panel_esphome

Code is derived from Demo #3, which displays weather info and the day's calendar.

Would have forked it, but couldn't see it on Seeedstudio's repos.

Using https://github.com/mampfes/hacs_waste_collection_schedule to get binformation from the source

## Done:

Fixed issue with array out-of-bounds access displaying wrong data for day (used strftime instead).

Reduced font sizes for sensor data & date data; moved date to avoid overlap with dividing line.

Added (very) basic bin display - details upcoming bin type & days

Bin display now displays the next bin if it's tomorrow or today (parsed on device)

Units now supplied by Home Assistant wether.forecast_home attributes

## To do:

Ensure that date format is selected automatically (localisation settings)

Add a battery monitor (although schematic does not seem to show any option for ADC of the current battery PD)

Add bin display (if present) to the head of the events vector so there's no issues with displaying. 

Modify to use Google calendar (define in secrets.yaml?)

Add an "upcoming events" section for a week's warning of impending all-day events.

Possibly move day date to same line as day of week - double digits may overlap again.  In English, affects Sept/Nov/Dec as each has 9 letters.
