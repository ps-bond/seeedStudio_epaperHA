# seeedStudio_epaperHA

https://wiki.seeedstudio.com/xiao_075inch_epaper_panel_esphome

Code is derived from Demo #3, which displays weather info and the day's calendar.

Would have forked it, but couldn't see it on Seeedstudio's repos.


## Done:

Fixed issue with array out-of-bounds access displaying wrong data for day (used strftime instead).

Reduced font sizes for sensor data & date data; moved date to avoid overlap with dividing line.


## To do:

Ensure that units are selected automatically (their version was fixed on F & mmHg; this currently uses C & mbar)

Ensure that date format is selected automatically 

Add a battery monitor

Extend to add bin display using https://github.com/mampfes/hacs_waste_collection_schedule 

Modify to use Google calendar (define in secrets.yaml?)
