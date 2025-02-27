RUNTIME_DATA_FILE_BEGIN(dungeon_timelimit.enc)

RUNTIME_DATA_TYPE_BEGIN(DungeonGroup, "cabal.dungeon_group.group")
	RUNTIME_DATA_PROPERTY(Int32, DungeonIndex, "dungeonidx")
	RUNTIME_DATA_PROPERTY(Int32, DungeonGroup, "dungeon_group")
RUNTIME_DATA_TYPE_END(DungeonGroup)
RUNTIME_DATA_TYPE_INDEX(DungeonGroup, UInt32, DungeonIndex)

RUNTIME_DATA_TYPE_BEGIN(DungeonTime, "cabal.dungeon_time.gruop_index")
	RUNTIME_DATA_PROPERTY(Int32, Index, "index")
	RUNTIME_DATA_TYPE_BEGIN_CHILD(DungeonPlayTime, "dungeon_playtime")
		RUNTIME_DATA_PROPERTY(Int32, DayOfWeek, "dayofweek")
		RUNTIME_DATA_PROPERTY(Int32, PlayTime, "play_time")
	RUNTIME_DATA_TYPE_END_CHILD(DungeonPlayTime)
RUNTIME_DATA_TYPE_END(DungeonTime)
RUNTIME_DATA_TYPE_INDEX(DungeonTime, UInt32, Index)

RUNTIME_DATA_TYPE_BEGIN(DungeonCharge, "cabal.dungeon_charge.charge")
	RUNTIME_DATA_PROPERTY(Int32, Index, "Index")
	RUNTIME_DATA_PROPERTY(Int32, Duration, "Duration")
	RUNTIME_DATA_PROPERTY(UInt64, Price, "Price")
	RUNTIME_DATA_PROPERTY(Int32, UseFlag, "use_flag")
RUNTIME_DATA_TYPE_END(DungeonCharge)

RUNTIME_DATA_TYPE_BEGIN(PlayTimeChargeFlag, "cabal.playtime_charge_flag.charge_flag")
	RUNTIME_DATA_PROPERTY(Int32, Index, "Index")
	RUNTIME_DATA_PROPERTY(Int32, Flag, "Flag")
RUNTIME_DATA_TYPE_END(PlayTimeChargeFlag)

RUNTIME_DATA_FILE_END