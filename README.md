# seeedStudio_epaperHA

https://wiki.seeedstudio.com/xiao_075inch_epaper_panel_esphome

Code is derived from Demo #3, which displays weather info and the day's calendar.

Would have forked it, but couldn't see it on Seeedstudio's repos.

Using https://github.com/mampfes/hacs_waste_collection_schedule to get binformation from the source

## Done:

Fixed issue with array out-of-bounds access displaying wrong data for day (used strftime instead).

Reduced font sizes for sensor data & date data; moved date to avoid overlap with dividing line.

Added (very) basic bin display - details upcoming bin type & days

## To do:

Ensure that units are selected automatically (their version was fixed on F & mmHg; this currently uses C & mbar)

Ensure that date format is selected automatically (localisation settings - same applies to temp/pressure/windspeed)

Add a battery monitor

Extend bin display - determine if I need to parse the state string locally or I can get HA to provide a bin state 1 day before + on the day.  Add it to the events vector so there's no issues with displaying. 

Modify to use Google calendar (define in secrets.yaml?)

Add an "upcoming events" section for a week's warning of impending all-day events.

Possibly move day date to same line as day of week - double digits may overlap again.  In English, affects Sept/Nov/Dec as each has 9 letters.
