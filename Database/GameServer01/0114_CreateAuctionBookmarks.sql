CREATE TABLE AuctionBookmarks (
    AccountID INT NOT NULL,
    SlotIndex TINYINT NOT NULL,
    Category1 SMALLINT NOT NULL,
    Category2 SMALLINT NOT NULL,
    Category3 SMALLINT NOT NULL,
    Category4 SMALLINT NOT NULL,
    Category5 SMALLINT NOT NULL,
    SubCategory1 TINYINT NOT NULL,
    SubCategory2 TINYINT NOT NULL,
    Description VARCHAR(49) NOT NULL,
    
    CreatedAt BIGINT UNSIGNED NOT NULL DEFAULT UNIX_TIMESTAMP(),
    UpdatedAt BIGINT UNSIGNED NOT NULL DEFAULT UNIX_TIMESTAMP(),

    UNIQUE (AccountID, SlotIndex)
) ENGINE = INNODB DEFAULT CHARSET = utf8;
