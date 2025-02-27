RUNTIME_DATA_FILE_BEGIN(costume.enc)

RUNTIME_DATA_TYPE_BEGIN(CostumeItem, "costume.costume_list.costume")
	RUNTIME_DATA_PROPERTY(UInt32, CategoryIndex, "Type")
	RUNTIME_DATA_PROPERTY(UInt32, ItemID, "Item_ID")
RUNTIME_DATA_TYPE_END(CostumeItem)
RUNTIME_DATA_TYPE_INDEX(CostumeItem, UInt32, ItemID)

RUNTIME_DATA_FILE_END

RUNTIME_DATA_FILE_BEGIN(DIR_PATH(Service, CostumeWarehouse.xml))

RUNTIME_DATA_TYPE_BEGIN(CostumeWarehousePrice, "PriceList.Item")
	RUNTIME_DATA_PROPERTY(UInt32, ItemID, "ItemID")
	RUNTIME_DATA_PROPERTY(Int32, Price1, "Price1")
	RUNTIME_DATA_PROPERTY(Int32, Price2, "Price2")
	RUNTIME_DATA_PROPERTY(Int32, Price3, "Price3")
RUNTIME_DATA_TYPE_END(CostumeWarehousePrice)
RUNTIME_DATA_TYPE_INDEX(CostumeWarehousePrice, UInt32, ItemID)

RUNTIME_DATA_FILE_END