#ifndef GUARD_CONSTANTS_WEATHER_H
#define GUARD_CONSTANTS_WEATHER_H

#define WEATHER_NONE                    0
#define WEATHER_SUNNY_CLOUDS            1
#define WEATHER_SUNNY                   2
#define WEATHER_RAIN                    3
#define WEATHER_SNOW                    4   // Unused
#define WEATHER_RAIN_THUNDERSTORM       5
#define WEATHER_FOG_HORIZONTAL          6
#define WEATHER_VOLCANIC_ASH            7
#define WEATHER_SANDSTORM               8
#define WEATHER_FOG_DIAGONAL            9   // Unused
#define WEATHER_UNDERWATER              10  // Unused
#define WEATHER_SHADE                   11  // Original name was closer to WEATHER_CLOUDY/OVERCAST
#define WEATHER_DROUGHT                 12
#define WEATHER_DOWNPOUR                13
#define WEATHER_UNDERWATER_BUBBLES      14
#define WEATHER_ABNORMAL                15  // The alternating weather during Groudon/Kyogre conflict
#define WEATHER_ROUTE119_CYCLE          20
#define WEATHER_ROUTE123_CYCLE          21
// New weathers that are randomly set on battle start
#define WEATHER_HARSH_SUN               22
#define WEATHER_MONSOON                 23
//SANDSTORM ALREADY DEFINED
#define WEATHER_HAILSTORM               25
#define WEATHER_LIGHTNING_STORM         26
#define WEATHER_EARTHQUAKE              27
#define WEATHER_ETHER                   28
#define WEATHER_POLLEN                  29
#define WEATHER_TORNADO                 30
#define WEATHER_REGULAR_DAY             31
#define WEATHER_HUMID                   32
#define WEATHER_FOG                     33
#define WEATHER_ECLIPSE                 34
#define WEATHER_ACID_RAIN               35
#define WEATHER_RAINBOW                 36
#define WEATHER_SOLAR_FLARE             37

// These are used in maps' coord_weather_event entries.
// They are not a one-to-one mapping with the engine's
// internal weather constants above.
#define COORD_EVENT_WEATHER_SUNNY_CLOUDS        1
#define COORD_EVENT_WEATHER_SUNNY               2
#define COORD_EVENT_WEATHER_RAIN                3
#define COORD_EVENT_WEATHER_SNOW                4
#define COORD_EVENT_WEATHER_RAIN_THUNDERSTORM   5
#define COORD_EVENT_WEATHER_FOG_HORIZONTAL      6
#define COORD_EVENT_WEATHER_FOG_DIAGONAL        7
#define COORD_EVENT_WEATHER_VOLCANIC_ASH        8
#define COORD_EVENT_WEATHER_SANDSTORM           9
#define COORD_EVENT_WEATHER_SHADE               10
#define COORD_EVENT_WEATHER_DROUGHT             11
#define COORD_EVENT_WEATHER_ROUTE119_CYCLE      20
#define COORD_EVENT_WEATHER_ROUTE123_CYCLE      21

// These are the "abnormal weather events" that are used
// to find Kyogre and Groudon.

// Groudon/Terra Cave locations
#define TERRA_CAVE_LOCATIONS_START          1
#define ABNORMAL_WEATHER_ROUTE_114_NORTH    (TERRA_CAVE_LOCATIONS_START + 0)
#define ABNORMAL_WEATHER_ROUTE_114_SOUTH    (TERRA_CAVE_LOCATIONS_START + 1)
#define ABNORMAL_WEATHER_ROUTE_115_WEST     (TERRA_CAVE_LOCATIONS_START + 2)
#define ABNORMAL_WEATHER_ROUTE_115_EAST     (TERRA_CAVE_LOCATIONS_START + 3)
#define ABNORMAL_WEATHER_ROUTE_116_NORTH    (TERRA_CAVE_LOCATIONS_START + 4)
#define ABNORMAL_WEATHER_ROUTE_116_SOUTH    (TERRA_CAVE_LOCATIONS_START + 5)
#define ABNORMAL_WEATHER_ROUTE_118_EAST     (TERRA_CAVE_LOCATIONS_START + 6)
#define ABNORMAL_WEATHER_ROUTE_118_WEST     (TERRA_CAVE_LOCATIONS_START + 7)
#define TERRA_CAVE_LOCATIONS                8

// Kyogre/Marina Cave locations
#define MARINE_CAVE_LOCATIONS_START         (TERRA_CAVE_LOCATIONS_START + TERRA_CAVE_LOCATIONS)
#define ABNORMAL_WEATHER_ROUTE_105_NORTH    (MARINE_CAVE_LOCATIONS_START + 0)
#define ABNORMAL_WEATHER_ROUTE_105_SOUTH    (MARINE_CAVE_LOCATIONS_START + 1)
#define ABNORMAL_WEATHER_ROUTE_125_WEST     (MARINE_CAVE_LOCATIONS_START + 2)
#define ABNORMAL_WEATHER_ROUTE_125_EAST     (MARINE_CAVE_LOCATIONS_START + 3)
#define ABNORMAL_WEATHER_ROUTE_127_NORTH    (MARINE_CAVE_LOCATIONS_START + 4)
#define ABNORMAL_WEATHER_ROUTE_127_SOUTH    (MARINE_CAVE_LOCATIONS_START + 5)
#define ABNORMAL_WEATHER_ROUTE_129_WEST     (MARINE_CAVE_LOCATIONS_START + 6)
#define ABNORMAL_WEATHER_ROUTE_129_EAST     (MARINE_CAVE_LOCATIONS_START + 7)
#define MARINE_CAVE_LOCATIONS               8

#define ABNORMAL_WEATHER_LOCATIONS  (MARINE_CAVE_LOCATIONS + TERRA_CAVE_LOCATIONS)
#define ABNORMAL_WEATHER_NONE       0

#endif // GUARD_CONSTANTS_WEATHER_H
