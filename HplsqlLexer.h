
// Generated from Hplsql.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  HplsqlLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T_ACTION = 6, T_ADD2 = 7, 
    T_ALL = 8, T_ALLOCATE = 9, T_ALTER = 10, T_AND = 11, T_ANSI_NULLS = 12, 
    T_ANSI_PADDING = 13, T_AS = 14, T_ASC = 15, T_ASSOCIATE = 16, T_AT = 17, 
    T_AUTO_INCREMENT = 18, T_AVG = 19, T_BATCHSIZE = 20, T_BEGIN = 21, T_BETWEEN = 22, 
    T_BIGINT = 23, T_BINARY_DOUBLE = 24, T_BINARY_FLOAT = 25, T_BINARY_INTEGER = 26, 
    T_BIT = 27, T_BODY = 28, T_BREAK = 29, T_BY = 30, T_BYTE = 31, T_CALL = 32, 
    T_CALLER = 33, T_CASCADE = 34, T_CASE = 35, T_CASESPECIFIC = 36, T_CAST = 37, 
    T_CHAR = 38, T_CHARACTER = 39, T_CHARSET = 40, T_CLIENT = 41, T_CLOSE = 42, 
    T_CLUSTERED = 43, T_CMP = 44, T_COLLECT = 45, T_COLLECTION = 46, T_COLUMN = 47, 
    T_COMMENT = 48, T_CONSTANT = 49, T_COMMIT = 50, T_COMPRESS = 51, T_CONCAT = 52, 
    T_CONDITION = 53, T_CONSTRAINT = 54, T_CONTINUE = 55, T_COPY = 56, T_COUNT = 57, 
    T_COUNT_BIG = 58, T_CREATE = 59, T_CREATION = 60, T_CREATOR = 61, T_CS = 62, 
    T_CURRENT = 63, T_CURRENT_SCHEMA = 64, T_CURSOR = 65, T_DATABASE = 66, 
    T_DATA = 67, T_DATE = 68, T_DATETIME = 69, T_DAY = 70, T_DAYS = 71, 
    T_DEC = 72, T_DECIMAL = 73, T_DECLARE = 74, T_DEFAULT = 75, T_DEFERRED = 76, 
    T_DEFINED = 77, T_DEFINER = 78, T_DEFINITION = 79, T_DELETE = 80, T_DELIMITED = 81, 
    T_DELIMITER = 82, T_DESC = 83, T_DESCRIBE = 84, T_DIAGNOSTICS = 85, 
    T_DIR = 86, T_DIRECTORY = 87, T_DISTINCT = 88, T_DISTRIBUTE = 89, T_DO = 90, 
    T_DOUBLE = 91, T_DROP = 92, T_DYNAMIC = 93, T_ELSE = 94, T_ELSEIF = 95, 
    T_ELSIF = 96, T_ENABLE = 97, T_END = 98, T_ENGINE = 99, T_ESCAPED = 100, 
    T_EXCEPT = 101, T_EXEC = 102, T_EXECUTE = 103, T_EXCEPTION = 104, T_EXCLUSIVE = 105, 
    T_EXISTS = 106, T_EXIT = 107, T_FALLBACK = 108, T_FALSE = 109, T_FETCH = 110, 
    T_FIELDS = 111, T_FILE = 112, T_FILES = 113, T_FLOAT = 114, T_FOR = 115, 
    T_FOREIGN = 116, T_FORMAT = 117, T_FOUND = 118, T_FROM = 119, T_FULL = 120, 
    T_FUNCTION = 121, T_GET = 122, T_GLOBAL = 123, T_GO = 124, T_GRANT = 125, 
    T_GROUP = 126, T_HANDLER = 127, T_HASH = 128, T_HAVING = 129, T_HDFS = 130, 
    T_HIVE = 131, T_HOST = 132, T_IDENTITY = 133, T_IF = 134, T_IGNORE = 135, 
    T_IMMEDIATE = 136, T_IN = 137, T_INCLUDE = 138, T_INDEX = 139, T_INITRANS = 140, 
    T_INNER = 141, T_INOUT = 142, T_INSERT = 143, T_INT = 144, T_INT2 = 145, 
    T_INT4 = 146, T_INT8 = 147, T_INTEGER = 148, T_INTERSECT = 149, T_INTERVAL = 150, 
    T_INTO = 151, T_INVOKER = 152, T_IS = 153, T_ISOPEN = 154, T_ITEMS = 155, 
    T_JOIN = 156, T_KEEP = 157, T_KEY = 158, T_KEYS = 159, T_LANGUAGE = 160, 
    T_LEAVE = 161, T_LEFT = 162, T_LIKE = 163, T_LIMIT = 164, T_LINES = 165, 
    T_LOCAL = 166, T_LOCATION = 167, T_LOCATOR = 168, T_LOCATORS = 169, 
    T_LOCKS = 170, T_LOG = 171, T_LOGGED = 172, T_LOGGING = 173, T_LOOP = 174, 
    T_MAP = 175, T_MATCHED = 176, T_MAX = 177, T_MAXTRANS = 178, T_MERGE = 179, 
    T_MESSAGE_TEXT = 180, T_MICROSECOND = 181, T_MICROSECONDS = 182, T_MIN = 183, 
    T_MULTISET = 184, T_NCHAR = 185, T_NEW = 186, T_NVARCHAR = 187, T_NO = 188, 
    T_NOCOUNT = 189, T_NOCOMPRESS = 190, T_NOLOGGING = 191, T_NONE = 192, 
    T_NOT = 193, T_NOTFOUND = 194, T_NULL = 195, T_NUMERIC = 196, T_NUMBER = 197, 
    T_OBJECT = 198, T_OFF = 199, T_ON = 200, T_ONLY = 201, T_OPEN = 202, 
    T_OR = 203, T_ORDER = 204, T_OUT = 205, T_OUTER = 206, T_OVER = 207, 
    T_OVERWRITE = 208, T_OWNER = 209, T_PACKAGE = 210, T_PARTITION = 211, 
    T_PCTFREE = 212, T_PCTUSED = 213, T_PLS_INTEGER = 214, T_PRECISION = 215, 
    T_PRESERVE = 216, T_PRIMARY = 217, T_PRINT = 218, T_PROC = 219, T_PROCEDURE = 220, 
    T_QUALIFY = 221, T_QUERY_BAND = 222, T_QUIT = 223, T_QUOTED_IDENTIFIER = 224, 
    T_RAISE = 225, T_REAL = 226, T_REFERENCES = 227, T_REGEXP = 228, T_REPLACE = 229, 
    T_RESIGNAL = 230, T_RESTRICT = 231, T_RESULT = 232, T_RESULT_SET_LOCATOR = 233, 
    T_RETURN = 234, T_RETURNS = 235, T_REVERSE = 236, T_RIGHT = 237, T_RLIKE = 238, 
    T_ROLE = 239, T_ROLLBACK = 240, T_ROW = 241, T_ROWS = 242, T_ROWTYPE = 243, 
    T_ROW_COUNT = 244, T_RR = 245, T_RS = 246, T_PWD = 247, T_TRIM = 248, 
    T_SCHEMA = 249, T_SECOND = 250, T_SECONDS = 251, T_SECURITY = 252, T_SEGMENT = 253, 
    T_SEL = 254, T_SELECT = 255, T_SET = 256, T_SESSION = 257, T_SESSIONS = 258, 
    T_SETS = 259, T_SHARE = 260, T_SIGNAL = 261, T_SIMPLE_DOUBLE = 262, 
    T_SIMPLE_FLOAT = 263, T_SIMPLE_INTEGER = 264, T_SMALLDATETIME = 265, 
    T_SMALLINT = 266, T_SQL = 267, T_SQLEXCEPTION = 268, T_SQLINSERT = 269, 
    T_SQLSTATE = 270, T_SQLWARNING = 271, T_STATS = 272, T_STATISTICS = 273, 
    T_STEP = 274, T_STORAGE = 275, T_STORED = 276, T_STRING = 277, T_SUBDIR = 278, 
    T_SUBSTRING = 279, T_SUM = 280, T_SYS_REFCURSOR = 281, T_TABLE = 282, 
    T_TABLESPACE = 283, T_TEMPORARY = 284, T_TERMINATED = 285, T_TEXTIMAGE_ON = 286, 
    T_THEN = 287, T_TIMESTAMP = 288, T_TINYINT = 289, T_TITLE = 290, T_TO = 291, 
    T_TOP = 292, T_TRANSACTION = 293, T_TRUE = 294, T_TRUNCATE = 295, T_TYPE = 296, 
    T_UNION = 297, T_UNIQUE = 298, T_UPDATE = 299, T_UR = 300, T_USE = 301, 
    T_USING = 302, T_VALUE = 303, T_VALUES = 304, T_VAR = 305, T_VARCHAR = 306, 
    T_VARCHAR2 = 307, T_VARYING = 308, T_VOLATILE = 309, T_WHEN = 310, T_WHERE = 311, 
    T_WHILE = 312, T_WITH = 313, T_WITHOUT = 314, T_WORK = 315, T_XACT_ABORT = 316, 
    T_XML = 317, T_YES = 318, T_ACTIVITY_COUNT = 319, T_CUME_DIST = 320, 
    T_CURRENT_DATE = 321, T_CURRENT_TIMESTAMP = 322, T_CURRENT_USER = 323, 
    T_DENSE_RANK = 324, T_FIRST_VALUE = 325, T_LAG = 326, T_LAST_VALUE = 327, 
    T_LEAD = 328, T_MAX_PART_STRING = 329, T_MIN_PART_STRING = 330, T_MAX_PART_INT = 331, 
    T_MIN_PART_INT = 332, T_MAX_PART_DATE = 333, T_MIN_PART_DATE = 334, 
    T_PART_COUNT = 335, T_PART_LOC = 336, T_RANK = 337, T_ROW_NUMBER = 338, 
    T_STDEV = 339, T_SYSDATE = 340, T_VARIANCE = 341, T_USER = 342, T_ADD = 343, 
    T_COLON = 344, T_COMMA = 345, T_PIPE = 346, T_DIV = 347, T_DOT2 = 348, 
    T_EQUAL = 349, T_EQUAL2 = 350, T_NOTEQUAL = 351, T_NOTEQUAL2 = 352, 
    T_GREATER = 353, T_GREATEREQUAL = 354, T_LESS = 355, T_LESSEQUAL = 356, 
    T_MUL = 357, T_OPEN_B = 358, T_OPEN_P = 359, T_OPEN_SB = 360, T_CLOSE_B = 361, 
    T_CLOSE_P = 362, T_CLOSE_SB = 363, T_SEMICOLON = 364, T_SUB = 365, L_ID = 366, 
    L_S_STRING = 367, L_D_STRING = 368, L_INT = 369, L_DEC = 370, L_WS = 371, 
    L_M_COMMENT = 372, L_S_COMMENT = 373, L_FILE = 374, L_LABEL = 375
  };

  explicit HplsqlLexer(antlr4::CharStream *input);
  ~HplsqlLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

