// A Bison parser, made by GNU Bison 3.5.1.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.



// First part of user prologue.
#line 129 "p4parser.ypp"
 /* -*-C++-*- */
#include "frontends/parsers/parserDriver.h"
#include "frontends/parsers/p4/p4lexer.hpp"
#include "frontends/parsers/p4/p4parser.hpp"

#define YYLLOC_DEFAULT(Cur, Rhs, N)                                             \
    ((Cur) = (N) ? YYRHSLOC(Rhs, 1) + YYRHSLOC(Rhs, N)                          \
                 : Util::SourceInfo(driver.sources, YYRHSLOC(Rhs, 0).getEnd()))

#undef yylex
#define yylex lexer.yylex


#line 54 "p4parser.tab.cpp"


#include "p4parser.tab.hpp"




#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 23 "p4parser.ypp"
namespace P4 {
#line 151 "p4parser.tab.cpp"


  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  P4Parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  P4Parser::P4Parser (P4::P4ParserDriver& driver_yyarg, P4::AbstractP4Lexer& lexer_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      driver (driver_yyarg),
      lexer (lexer_yyarg)
  {}

  P4Parser::~P4Parser ()
  {}

  P4Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  P4Parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  P4Parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  P4Parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  P4Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  P4Parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  P4Parser::symbol_number_type
  P4Parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[+state];
  }

  P4Parser::stack_symbol_type::stack_symbol_type ()
  {}

  P4Parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 193: // typeRef
      case 194: // namedType
      case 197: // p4listType
      case 198: // tupleType
      case 199: // headerStackType
      case 200: // specializedType
      case 201: // baseType
      case 202: // typeOrVoid
      case 206: // typeArg
      case 208: // realTypeArg
        value.YY_MOVE_OR_COPY< ConstType* > (YY_MOVE (that.value));
        break;

      case 135: // annotation
        value.YY_MOVE_OR_COPY< IR::Annotation* > (YY_MOVE (that.value));
        break;

      case 133: // optAnnotations
        value.YY_MOVE_OR_COPY< IR::Annotations* > (YY_MOVE (that.value));
        break;

      case 270: // argument
        value.YY_MOVE_OR_COPY< IR::Argument* > (YY_MOVE (that.value));
        break;

      case 148: // objInitializer
      case 165: // parserBlockStatement
      case 185: // controlBody
      case 242: // blockStatement
        value.YY_MOVE_OR_COPY< IR::BlockStatement* > (YY_MOVE (that.value));
        break;

      case 147: // instantiation
      case 151: // objDeclaration
      case 156: // parserLocalElement
      case 178: // valueSetDeclaration
      case 184: // controlLocalDeclaration
      case 250: // tableDeclaration
      case 260: // actionDeclaration
      case 261: // registerActionDeclaration
      case 262: // variableDeclaration
      case 263: // registerDeclaration
      case 264: // constantDeclaration
      case 267: // functionDeclaration
        value.YY_MOVE_OR_COPY< IR::Declaration* > (YY_MOVE (that.value));
        break;

      case 143: // direction
        value.YY_MOVE_OR_COPY< IR::Direction > (YY_MOVE (that.value));
        break;

      case 257: // entry
        value.YY_MOVE_OR_COPY< IR::Entry* > (YY_MOVE (that.value));
        break;

      case 125: // p4rtControllerType
      case 167: // transitionStatement
      case 168: // stateExpression
      case 169: // selectExpression
      case 172: // keysetExpression
      case 176: // reducedSimpleKeysetExpression
      case 177: // simpleKeysetExpression
      case 248: // switchLabel
      case 256: // actionRef
      case 258: // entryPriority
      case 265: // optInitializer
      case 266: // initializer
      case 275: // lvalue
      case 276: // expression
      case 277: // nonBraceExpression
      case 278: // intOrStr
        value.YY_MOVE_OR_COPY< IR::Expression* > (YY_MOVE (that.value));
        break;

      case 129: // nonTypeName
      case 130: // name
      case 131: // nonTableKwName
      case 273: // dot_name
        value.YY_MOVE_OR_COPY< IR::ID* > (YY_MOVE (that.value));
        break;

      case 255: // actionList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::ActionListElement>* > (YY_MOVE (that.value));
        break;

      case 155: // parserLocalElements
      case 183: // controlLocalDeclarations
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::Declaration>* > (YY_MOVE (that.value));
        break;

      case 230: // identifierList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::Declaration_ID>* > (YY_MOVE (that.value));
        break;

      case 138: // kvList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::NamedExpression>* > (YY_MOVE (that.value));
        break;

      case 140: // parameterList
      case 141: // nonEmptyParameterList
      case 152: // optConstructorParameters
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::Parameter>* > (YY_MOVE (that.value));
        break;

      case 160: // parserStates
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::ParserState>* > (YY_MOVE (that.value));
        break;

      case 251: // tablePropertyList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::Property>* > (YY_MOVE (that.value));
        break;

      case 226: // specifiedIdentifierList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::SerEnumMember>* > (YY_MOVE (that.value));
        break;

      case 150: // objDeclarations
      case 163: // parserStatements
      case 244: // statOrDeclList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::StatOrDecl>* > (YY_MOVE (that.value));
        break;

      case 221: // structFieldList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::StructField>* > (YY_MOVE (that.value));
        break;

      case 205: // typeParameterList
        value.YY_MOVE_OR_COPY< IR::IndexedVector<IR::Type_Var>* > (YY_MOVE (that.value));
        break;

      case 254: // keyElement
        value.YY_MOVE_OR_COPY< IR::KeyElement* > (YY_MOVE (that.value));
        break;

      case 190: // functionPrototype
      case 192: // methodPrototype
        value.YY_MOVE_OR_COPY< IR::Method* > (YY_MOVE (that.value));
        break;

      case 139: // kvPair
        value.YY_MOVE_OR_COPY< IR::NamedExpression* > (YY_MOVE (that.value));
        break;

      case 124: // fragment
      case 128: // declaration
      case 186: // externDeclaration
      case 229: // matchKindDeclaration
        value.YY_MOVE_OR_COPY< IR::Node* > (YY_MOVE (that.value));
        break;

      case 142: // parameter
        value.YY_MOVE_OR_COPY< IR::Parameter* > (YY_MOVE (that.value));
        break;

      case 161: // parserState
        value.YY_MOVE_OR_COPY< IR::ParserState* > (YY_MOVE (that.value));
        break;

      case 195: // prefixedType
      case 272: // prefixedNonTypeName
        value.YY_MOVE_OR_COPY< IR::Path* > (YY_MOVE (that.value));
        break;

      case 252: // tableProperty
        value.YY_MOVE_OR_COPY< IR::Property* > (YY_MOVE (that.value));
        break;

      case 171: // selectCase
        value.YY_MOVE_OR_COPY< IR::SelectCase* > (YY_MOVE (that.value));
        break;

      case 227: // specifiedIdentifier
        value.YY_MOVE_OR_COPY< IR::SerEnumMember* > (YY_MOVE (that.value));
        break;

      case 164: // parserStatement
      case 249: // statementOrDeclaration
        value.YY_MOVE_OR_COPY< IR::StatOrDecl* > (YY_MOVE (that.value));
        break;

      case 232: // assignmentOrMethodCallStatement
      case 233: // emptyStatement
      case 234: // exitStatement
      case 235: // returnStatement
      case 236: // conditionalStatement
      case 237: // whileStatement
      case 238: // forStatement
      case 239: // forInitializer
      case 240: // directApplication
      case 241: // statement
      case 245: // switchStatement
        value.YY_MOVE_OR_COPY< IR::Statement* > (YY_MOVE (that.value));
        break;

      case 222: // structField
        value.YY_MOVE_OR_COPY< IR::StructField* > (YY_MOVE (that.value));
        break;

      case 247: // switchCase
        value.YY_MOVE_OR_COPY< IR::SwitchCase* > (YY_MOVE (that.value));
        break;

      case 203: // optTypeParameters
      case 204: // typeParameters
        value.YY_MOVE_OR_COPY< IR::TypeParameters* > (YY_MOVE (that.value));
        break;

      case 180: // controlTypeDeclaration
        value.YY_MOVE_OR_COPY< IR::Type_Control* > (YY_MOVE (that.value));
        break;

      case 144: // packageTypeDeclaration
      case 154: // parserDeclaration
      case 179: // controlDeclaration
      case 210: // typeDeclaration
      case 211: // derivedTypeDeclaration
      case 212: // headerTypeDeclaration
      case 215: // structTypeDeclaration
      case 218: // headerUnionDeclaration
      case 223: // enumDeclaration
      case 231: // typedefDeclaration
        value.YY_MOVE_OR_COPY< IR::Type_Declaration* > (YY_MOVE (that.value));
        break;

      case 228: // errorDeclaration
        value.YY_MOVE_OR_COPY< IR::Type_Error* > (YY_MOVE (that.value));
        break;

      case 196: // typeName
        value.YY_MOVE_OR_COPY< IR::Type_Name* > (YY_MOVE (that.value));
        break;

      case 157: // parserTypeDeclaration
        value.YY_MOVE_OR_COPY< IR::Type_Parser* > (YY_MOVE (that.value));
        break;

      case 134: // annotations
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Annotation>* > (YY_MOVE (that.value));
        break;

      case 136: // annotationBody
        value.YY_MOVE_OR_COPY< IR::Vector<IR::AnnotationToken>* > (YY_MOVE (that.value));
        break;

      case 268: // argumentList
      case 269: // nonEmptyArgList
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Argument>* > (YY_MOVE (that.value));
        break;

      case 259: // entriesList
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Entry>* > (YY_MOVE (that.value));
        break;

      case 173: // tupleKeysetExpression
      case 175: // simpleExpressionList
      case 271: // expressionList
      case 279: // intList
      case 280: // intOrStrList
      case 281: // strList
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Expression>* > (YY_MOVE (that.value));
        break;

      case 253: // keyElementList
        value.YY_MOVE_OR_COPY< IR::Vector<IR::KeyElement>* > (YY_MOVE (that.value));
        break;

      case 189: // methodPrototypes
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Method>* > (YY_MOVE (that.value));
        break;

      case 170: // selectCaseList
        value.YY_MOVE_OR_COPY< IR::Vector<IR::SelectCase>* > (YY_MOVE (that.value));
        break;

      case 246: // switchCases
        value.YY_MOVE_OR_COPY< IR::Vector<IR::SwitchCase>* > (YY_MOVE (that.value));
        break;

      case 207: // typeArgumentList
      case 209: // realTypeArgumentList
        value.YY_MOVE_OR_COPY< IR::Vector<IR::Type>* > (YY_MOVE (that.value));
        break;

      case 132: // optCONST
        value.YY_MOVE_OR_COPY< OptionalConst > (YY_MOVE (that.value));
        break;

      case 22: // UNEXPECTED_TOKEN
      case 23: // END_PRAGMA
      case 24: // "<="
      case 25: // ">="
      case 26: // "<<"
      case 27: // "&&"
      case 28: // "||"
      case 29: // "!="
      case 30: // "=="
      case 31: // "+"
      case 32: // "-"
      case 33: // "|+|"
      case 34: // "|-|"
      case 35: // "*"
      case 36: // "{#}"
      case 37: // "/"
      case 38: // "%"
      case 39: // "|"
      case 40: // "&"
      case 41: // "^"
      case 42: // "~"
      case 43: // "["
      case 44: // "]"
      case 45: // "{"
      case 46: // "}"
      case 47: // "<"
      case 48: // L_ANGLE_ARGS
      case 49: // ">"
      case 50: // R_ANGLE_SHIFT
      case 51: // "("
      case 52: // ")"
      case 53: // "!"
      case 54: // ":"
      case 55: // ","
      case 56: // "?"
      case 57: // "."
      case 58: // "="
      case 59: // ";"
      case 60: // "@"
      case 61: // "++"
      case 62: // "_"
      case 63: // "&&&"
      case 64: // "..."
      case 65: // ".."
      case 66: // TRUE
      case 67: // FALSE
      case 68: // THIS
      case 69: // ABSTRACT
      case 70: // ACTION
      case 71: // ACTIONS
      case 72: // APPLY
      case 73: // BOOL
      case 74: // BIT
      case 75: // CONST
      case 76: // CONTROL
      case 77: // DEFAULT
      case 78: // ELSE
      case 79: // ENTRIES
      case 80: // ENUM
      case 81: // ERROR
      case 82: // EXIT
      case 83: // EXTERN
      case 84: // FOR
      case 85: // HEADER
      case 86: // HEADER_UNION
      case 87: // IF
      case 88: // IN
      case 89: // INOUT
      case 90: // INT
      case 91: // KEY
      case 92: // LIST
      case 93: // SELECT
      case 94: // MATCH_KIND
      case 95: // TYPE
      case 96: // OUT
      case 97: // PACKAGE
      case 98: // PARSER
      case 99: // PRAGMA
      case 100: // PRIORITY
      case 101: // RETURN
      case 102: // REGISTER
      case 103: // REGACTION
      case 104: // STATE
      case 105: // STRING
      case 106: // STRUCT
      case 107: // SWITCH
      case 108: // TABLE
      case 109: // TRANSITION
      case 110: // TUPLE
      case 111: // TYPEDEF
      case 112: // VARBIT
      case 113: // VALUESET
      case 114: // VOID
      case 115: // WHILE
      case 137: // annotationToken
        value.YY_MOVE_OR_COPY< Token > (YY_MOVE (that.value));
        break;

      case 119: // INTEGER
        value.YY_MOVE_OR_COPY< UnparsedConstant > (YY_MOVE (that.value));
        break;

      case 116: // IDENTIFIER
      case 117: // TYPE_IDENTIFIER
      case 118: // STRING_LITERAL
        value.YY_MOVE_OR_COPY< cstring > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  P4Parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 193: // typeRef
      case 194: // namedType
      case 197: // p4listType
      case 198: // tupleType
      case 199: // headerStackType
      case 200: // specializedType
      case 201: // baseType
      case 202: // typeOrVoid
      case 206: // typeArg
      case 208: // realTypeArg
        value.move< ConstType* > (YY_MOVE (that.value));
        break;

      case 135: // annotation
        value.move< IR::Annotation* > (YY_MOVE (that.value));
        break;

      case 133: // optAnnotations
        value.move< IR::Annotations* > (YY_MOVE (that.value));
        break;

      case 270: // argument
        value.move< IR::Argument* > (YY_MOVE (that.value));
        break;

      case 148: // objInitializer
      case 165: // parserBlockStatement
      case 185: // controlBody
      case 242: // blockStatement
        value.move< IR::BlockStatement* > (YY_MOVE (that.value));
        break;

      case 147: // instantiation
      case 151: // objDeclaration
      case 156: // parserLocalElement
      case 178: // valueSetDeclaration
      case 184: // controlLocalDeclaration
      case 250: // tableDeclaration
      case 260: // actionDeclaration
      case 261: // registerActionDeclaration
      case 262: // variableDeclaration
      case 263: // registerDeclaration
      case 264: // constantDeclaration
      case 267: // functionDeclaration
        value.move< IR::Declaration* > (YY_MOVE (that.value));
        break;

      case 143: // direction
        value.move< IR::Direction > (YY_MOVE (that.value));
        break;

      case 257: // entry
        value.move< IR::Entry* > (YY_MOVE (that.value));
        break;

      case 125: // p4rtControllerType
      case 167: // transitionStatement
      case 168: // stateExpression
      case 169: // selectExpression
      case 172: // keysetExpression
      case 176: // reducedSimpleKeysetExpression
      case 177: // simpleKeysetExpression
      case 248: // switchLabel
      case 256: // actionRef
      case 258: // entryPriority
      case 265: // optInitializer
      case 266: // initializer
      case 275: // lvalue
      case 276: // expression
      case 277: // nonBraceExpression
      case 278: // intOrStr
        value.move< IR::Expression* > (YY_MOVE (that.value));
        break;

      case 129: // nonTypeName
      case 130: // name
      case 131: // nonTableKwName
      case 273: // dot_name
        value.move< IR::ID* > (YY_MOVE (that.value));
        break;

      case 255: // actionList
        value.move< IR::IndexedVector<IR::ActionListElement>* > (YY_MOVE (that.value));
        break;

      case 155: // parserLocalElements
      case 183: // controlLocalDeclarations
        value.move< IR::IndexedVector<IR::Declaration>* > (YY_MOVE (that.value));
        break;

      case 230: // identifierList
        value.move< IR::IndexedVector<IR::Declaration_ID>* > (YY_MOVE (that.value));
        break;

      case 138: // kvList
        value.move< IR::IndexedVector<IR::NamedExpression>* > (YY_MOVE (that.value));
        break;

      case 140: // parameterList
      case 141: // nonEmptyParameterList
      case 152: // optConstructorParameters
        value.move< IR::IndexedVector<IR::Parameter>* > (YY_MOVE (that.value));
        break;

      case 160: // parserStates
        value.move< IR::IndexedVector<IR::ParserState>* > (YY_MOVE (that.value));
        break;

      case 251: // tablePropertyList
        value.move< IR::IndexedVector<IR::Property>* > (YY_MOVE (that.value));
        break;

      case 226: // specifiedIdentifierList
        value.move< IR::IndexedVector<IR::SerEnumMember>* > (YY_MOVE (that.value));
        break;

      case 150: // objDeclarations
      case 163: // parserStatements
      case 244: // statOrDeclList
        value.move< IR::IndexedVector<IR::StatOrDecl>* > (YY_MOVE (that.value));
        break;

      case 221: // structFieldList
        value.move< IR::IndexedVector<IR::StructField>* > (YY_MOVE (that.value));
        break;

      case 205: // typeParameterList
        value.move< IR::IndexedVector<IR::Type_Var>* > (YY_MOVE (that.value));
        break;

      case 254: // keyElement
        value.move< IR::KeyElement* > (YY_MOVE (that.value));
        break;

      case 190: // functionPrototype
      case 192: // methodPrototype
        value.move< IR::Method* > (YY_MOVE (that.value));
        break;

      case 139: // kvPair
        value.move< IR::NamedExpression* > (YY_MOVE (that.value));
        break;

      case 124: // fragment
      case 128: // declaration
      case 186: // externDeclaration
      case 229: // matchKindDeclaration
        value.move< IR::Node* > (YY_MOVE (that.value));
        break;

      case 142: // parameter
        value.move< IR::Parameter* > (YY_MOVE (that.value));
        break;

      case 161: // parserState
        value.move< IR::ParserState* > (YY_MOVE (that.value));
        break;

      case 195: // prefixedType
      case 272: // prefixedNonTypeName
        value.move< IR::Path* > (YY_MOVE (that.value));
        break;

      case 252: // tableProperty
        value.move< IR::Property* > (YY_MOVE (that.value));
        break;

      case 171: // selectCase
        value.move< IR::SelectCase* > (YY_MOVE (that.value));
        break;

      case 227: // specifiedIdentifier
        value.move< IR::SerEnumMember* > (YY_MOVE (that.value));
        break;

      case 164: // parserStatement
      case 249: // statementOrDeclaration
        value.move< IR::StatOrDecl* > (YY_MOVE (that.value));
        break;

      case 232: // assignmentOrMethodCallStatement
      case 233: // emptyStatement
      case 234: // exitStatement
      case 235: // returnStatement
      case 236: // conditionalStatement
      case 237: // whileStatement
      case 238: // forStatement
      case 239: // forInitializer
      case 240: // directApplication
      case 241: // statement
      case 245: // switchStatement
        value.move< IR::Statement* > (YY_MOVE (that.value));
        break;

      case 222: // structField
        value.move< IR::StructField* > (YY_MOVE (that.value));
        break;

      case 247: // switchCase
        value.move< IR::SwitchCase* > (YY_MOVE (that.value));
        break;

      case 203: // optTypeParameters
      case 204: // typeParameters
        value.move< IR::TypeParameters* > (YY_MOVE (that.value));
        break;

      case 180: // controlTypeDeclaration
        value.move< IR::Type_Control* > (YY_MOVE (that.value));
        break;

      case 144: // packageTypeDeclaration
      case 154: // parserDeclaration
      case 179: // controlDeclaration
      case 210: // typeDeclaration
      case 211: // derivedTypeDeclaration
      case 212: // headerTypeDeclaration
      case 215: // structTypeDeclaration
      case 218: // headerUnionDeclaration
      case 223: // enumDeclaration
      case 231: // typedefDeclaration
        value.move< IR::Type_Declaration* > (YY_MOVE (that.value));
        break;

      case 228: // errorDeclaration
        value.move< IR::Type_Error* > (YY_MOVE (that.value));
        break;

      case 196: // typeName
        value.move< IR::Type_Name* > (YY_MOVE (that.value));
        break;

      case 157: // parserTypeDeclaration
        value.move< IR::Type_Parser* > (YY_MOVE (that.value));
        break;

      case 134: // annotations
        value.move< IR::Vector<IR::Annotation>* > (YY_MOVE (that.value));
        break;

      case 136: // annotationBody
        value.move< IR::Vector<IR::AnnotationToken>* > (YY_MOVE (that.value));
        break;

      case 268: // argumentList
      case 269: // nonEmptyArgList
        value.move< IR::Vector<IR::Argument>* > (YY_MOVE (that.value));
        break;

      case 259: // entriesList
        value.move< IR::Vector<IR::Entry>* > (YY_MOVE (that.value));
        break;

      case 173: // tupleKeysetExpression
      case 175: // simpleExpressionList
      case 271: // expressionList
      case 279: // intList
      case 280: // intOrStrList
      case 281: // strList
        value.move< IR::Vector<IR::Expression>* > (YY_MOVE (that.value));
        break;

      case 253: // keyElementList
        value.move< IR::Vector<IR::KeyElement>* > (YY_MOVE (that.value));
        break;

      case 189: // methodPrototypes
        value.move< IR::Vector<IR::Method>* > (YY_MOVE (that.value));
        break;

      case 170: // selectCaseList
        value.move< IR::Vector<IR::SelectCase>* > (YY_MOVE (that.value));
        break;

      case 246: // switchCases
        value.move< IR::Vector<IR::SwitchCase>* > (YY_MOVE (that.value));
        break;

      case 207: // typeArgumentList
      case 209: // realTypeArgumentList
        value.move< IR::Vector<IR::Type>* > (YY_MOVE (that.value));
        break;

      case 132: // optCONST
        value.move< OptionalConst > (YY_MOVE (that.value));
        break;

      case 22: // UNEXPECTED_TOKEN
      case 23: // END_PRAGMA
      case 24: // "<="
      case 25: // ">="
      case 26: // "<<"
      case 27: // "&&"
      case 28: // "||"
      case 29: // "!="
      case 30: // "=="
      case 31: // "+"
      case 32: // "-"
      case 33: // "|+|"
      case 34: // "|-|"
      case 35: // "*"
      case 36: // "{#}"
      case 37: // "/"
      case 38: // "%"
      case 39: // "|"
      case 40: // "&"
      case 41: // "^"
      case 42: // "~"
      case 43: // "["
      case 44: // "]"
      case 45: // "{"
      case 46: // "}"
      case 47: // "<"
      case 48: // L_ANGLE_ARGS
      case 49: // ">"
      case 50: // R_ANGLE_SHIFT
      case 51: // "("
      case 52: // ")"
      case 53: // "!"
      case 54: // ":"
      case 55: // ","
      case 56: // "?"
      case 57: // "."
      case 58: // "="
      case 59: // ";"
      case 60: // "@"
      case 61: // "++"
      case 62: // "_"
      case 63: // "&&&"
      case 64: // "..."
      case 65: // ".."
      case 66: // TRUE
      case 67: // FALSE
      case 68: // THIS
      case 69: // ABSTRACT
      case 70: // ACTION
      case 71: // ACTIONS
      case 72: // APPLY
      case 73: // BOOL
      case 74: // BIT
      case 75: // CONST
      case 76: // CONTROL
      case 77: // DEFAULT
      case 78: // ELSE
      case 79: // ENTRIES
      case 80: // ENUM
      case 81: // ERROR
      case 82: // EXIT
      case 83: // EXTERN
      case 84: // FOR
      case 85: // HEADER
      case 86: // HEADER_UNION
      case 87: // IF
      case 88: // IN
      case 89: // INOUT
      case 90: // INT
      case 91: // KEY
      case 92: // LIST
      case 93: // SELECT
      case 94: // MATCH_KIND
      case 95: // TYPE
      case 96: // OUT
      case 97: // PACKAGE
      case 98: // PARSER
      case 99: // PRAGMA
      case 100: // PRIORITY
      case 101: // RETURN
      case 102: // REGISTER
      case 103: // REGACTION
      case 104: // STATE
      case 105: // STRING
      case 106: // STRUCT
      case 107: // SWITCH
      case 108: // TABLE
      case 109: // TRANSITION
      case 110: // TUPLE
      case 111: // TYPEDEF
      case 112: // VARBIT
      case 113: // VALUESET
      case 114: // VOID
      case 115: // WHILE
      case 137: // annotationToken
        value.move< Token > (YY_MOVE (that.value));
        break;

      case 119: // INTEGER
        value.move< UnparsedConstant > (YY_MOVE (that.value));
        break;

      case 116: // IDENTIFIER
      case 117: // TYPE_IDENTIFIER
      case 118: // STRING_LITERAL
        value.move< cstring > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  P4Parser::stack_symbol_type&
  P4Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 193: // typeRef
      case 194: // namedType
      case 197: // p4listType
      case 198: // tupleType
      case 199: // headerStackType
      case 200: // specializedType
      case 201: // baseType
      case 202: // typeOrVoid
      case 206: // typeArg
      case 208: // realTypeArg
        value.copy< ConstType* > (that.value);
        break;

      case 135: // annotation
        value.copy< IR::Annotation* > (that.value);
        break;

      case 133: // optAnnotations
        value.copy< IR::Annotations* > (that.value);
        break;

      case 270: // argument
        value.copy< IR::Argument* > (that.value);
        break;

      case 148: // objInitializer
      case 165: // parserBlockStatement
      case 185: // controlBody
      case 242: // blockStatement
        value.copy< IR::BlockStatement* > (that.value);
        break;

      case 147: // instantiation
      case 151: // objDeclaration
      case 156: // parserLocalElement
      case 178: // valueSetDeclaration
      case 184: // controlLocalDeclaration
      case 250: // tableDeclaration
      case 260: // actionDeclaration
      case 261: // registerActionDeclaration
      case 262: // variableDeclaration
      case 263: // registerDeclaration
      case 264: // constantDeclaration
      case 267: // functionDeclaration
        value.copy< IR::Declaration* > (that.value);
        break;

      case 143: // direction
        value.copy< IR::Direction > (that.value);
        break;

      case 257: // entry
        value.copy< IR::Entry* > (that.value);
        break;

      case 125: // p4rtControllerType
      case 167: // transitionStatement
      case 168: // stateExpression
      case 169: // selectExpression
      case 172: // keysetExpression
      case 176: // reducedSimpleKeysetExpression
      case 177: // simpleKeysetExpression
      case 248: // switchLabel
      case 256: // actionRef
      case 258: // entryPriority
      case 265: // optInitializer
      case 266: // initializer
      case 275: // lvalue
      case 276: // expression
      case 277: // nonBraceExpression
      case 278: // intOrStr
        value.copy< IR::Expression* > (that.value);
        break;

      case 129: // nonTypeName
      case 130: // name
      case 131: // nonTableKwName
      case 273: // dot_name
        value.copy< IR::ID* > (that.value);
        break;

      case 255: // actionList
        value.copy< IR::IndexedVector<IR::ActionListElement>* > (that.value);
        break;

      case 155: // parserLocalElements
      case 183: // controlLocalDeclarations
        value.copy< IR::IndexedVector<IR::Declaration>* > (that.value);
        break;

      case 230: // identifierList
        value.copy< IR::IndexedVector<IR::Declaration_ID>* > (that.value);
        break;

      case 138: // kvList
        value.copy< IR::IndexedVector<IR::NamedExpression>* > (that.value);
        break;

      case 140: // parameterList
      case 141: // nonEmptyParameterList
      case 152: // optConstructorParameters
        value.copy< IR::IndexedVector<IR::Parameter>* > (that.value);
        break;

      case 160: // parserStates
        value.copy< IR::IndexedVector<IR::ParserState>* > (that.value);
        break;

      case 251: // tablePropertyList
        value.copy< IR::IndexedVector<IR::Property>* > (that.value);
        break;

      case 226: // specifiedIdentifierList
        value.copy< IR::IndexedVector<IR::SerEnumMember>* > (that.value);
        break;

      case 150: // objDeclarations
      case 163: // parserStatements
      case 244: // statOrDeclList
        value.copy< IR::IndexedVector<IR::StatOrDecl>* > (that.value);
        break;

      case 221: // structFieldList
        value.copy< IR::IndexedVector<IR::StructField>* > (that.value);
        break;

      case 205: // typeParameterList
        value.copy< IR::IndexedVector<IR::Type_Var>* > (that.value);
        break;

      case 254: // keyElement
        value.copy< IR::KeyElement* > (that.value);
        break;

      case 190: // functionPrototype
      case 192: // methodPrototype
        value.copy< IR::Method* > (that.value);
        break;

      case 139: // kvPair
        value.copy< IR::NamedExpression* > (that.value);
        break;

      case 124: // fragment
      case 128: // declaration
      case 186: // externDeclaration
      case 229: // matchKindDeclaration
        value.copy< IR::Node* > (that.value);
        break;

      case 142: // parameter
        value.copy< IR::Parameter* > (that.value);
        break;

      case 161: // parserState
        value.copy< IR::ParserState* > (that.value);
        break;

      case 195: // prefixedType
      case 272: // prefixedNonTypeName
        value.copy< IR::Path* > (that.value);
        break;

      case 252: // tableProperty
        value.copy< IR::Property* > (that.value);
        break;

      case 171: // selectCase
        value.copy< IR::SelectCase* > (that.value);
        break;

      case 227: // specifiedIdentifier
        value.copy< IR::SerEnumMember* > (that.value);
        break;

      case 164: // parserStatement
      case 249: // statementOrDeclaration
        value.copy< IR::StatOrDecl* > (that.value);
        break;

      case 232: // assignmentOrMethodCallStatement
      case 233: // emptyStatement
      case 234: // exitStatement
      case 235: // returnStatement
      case 236: // conditionalStatement
      case 237: // whileStatement
      case 238: // forStatement
      case 239: // forInitializer
      case 240: // directApplication
      case 241: // statement
      case 245: // switchStatement
        value.copy< IR::Statement* > (that.value);
        break;

      case 222: // structField
        value.copy< IR::StructField* > (that.value);
        break;

      case 247: // switchCase
        value.copy< IR::SwitchCase* > (that.value);
        break;

      case 203: // optTypeParameters
      case 204: // typeParameters
        value.copy< IR::TypeParameters* > (that.value);
        break;

      case 180: // controlTypeDeclaration
        value.copy< IR::Type_Control* > (that.value);
        break;

      case 144: // packageTypeDeclaration
      case 154: // parserDeclaration
      case 179: // controlDeclaration
      case 210: // typeDeclaration
      case 211: // derivedTypeDeclaration
      case 212: // headerTypeDeclaration
      case 215: // structTypeDeclaration
      case 218: // headerUnionDeclaration
      case 223: // enumDeclaration
      case 231: // typedefDeclaration
        value.copy< IR::Type_Declaration* > (that.value);
        break;

      case 228: // errorDeclaration
        value.copy< IR::Type_Error* > (that.value);
        break;

      case 196: // typeName
        value.copy< IR::Type_Name* > (that.value);
        break;

      case 157: // parserTypeDeclaration
        value.copy< IR::Type_Parser* > (that.value);
        break;

      case 134: // annotations
        value.copy< IR::Vector<IR::Annotation>* > (that.value);
        break;

      case 136: // annotationBody
        value.copy< IR::Vector<IR::AnnotationToken>* > (that.value);
        break;

      case 268: // argumentList
      case 269: // nonEmptyArgList
        value.copy< IR::Vector<IR::Argument>* > (that.value);
        break;

      case 259: // entriesList
        value.copy< IR::Vector<IR::Entry>* > (that.value);
        break;

      case 173: // tupleKeysetExpression
      case 175: // simpleExpressionList
      case 271: // expressionList
      case 279: // intList
      case 280: // intOrStrList
      case 281: // strList
        value.copy< IR::Vector<IR::Expression>* > (that.value);
        break;

      case 253: // keyElementList
        value.copy< IR::Vector<IR::KeyElement>* > (that.value);
        break;

      case 189: // methodPrototypes
        value.copy< IR::Vector<IR::Method>* > (that.value);
        break;

      case 170: // selectCaseList
        value.copy< IR::Vector<IR::SelectCase>* > (that.value);
        break;

      case 246: // switchCases
        value.copy< IR::Vector<IR::SwitchCase>* > (that.value);
        break;

      case 207: // typeArgumentList
      case 209: // realTypeArgumentList
        value.copy< IR::Vector<IR::Type>* > (that.value);
        break;

      case 132: // optCONST
        value.copy< OptionalConst > (that.value);
        break;

      case 22: // UNEXPECTED_TOKEN
      case 23: // END_PRAGMA
      case 24: // "<="
      case 25: // ">="
      case 26: // "<<"
      case 27: // "&&"
      case 28: // "||"
      case 29: // "!="
      case 30: // "=="
      case 31: // "+"
      case 32: // "-"
      case 33: // "|+|"
      case 34: // "|-|"
      case 35: // "*"
      case 36: // "{#}"
      case 37: // "/"
      case 38: // "%"
      case 39: // "|"
      case 40: // "&"
      case 41: // "^"
      case 42: // "~"
      case 43: // "["
      case 44: // "]"
      case 45: // "{"
      case 46: // "}"
      case 47: // "<"
      case 48: // L_ANGLE_ARGS
      case 49: // ">"
      case 50: // R_ANGLE_SHIFT
      case 51: // "("
      case 52: // ")"
      case 53: // "!"
      case 54: // ":"
      case 55: // ","
      case 56: // "?"
      case 57: // "."
      case 58: // "="
      case 59: // ";"
      case 60: // "@"
      case 61: // "++"
      case 62: // "_"
      case 63: // "&&&"
      case 64: // "..."
      case 65: // ".."
      case 66: // TRUE
      case 67: // FALSE
      case 68: // THIS
      case 69: // ABSTRACT
      case 70: // ACTION
      case 71: // ACTIONS
      case 72: // APPLY
      case 73: // BOOL
      case 74: // BIT
      case 75: // CONST
      case 76: // CONTROL
      case 77: // DEFAULT
      case 78: // ELSE
      case 79: // ENTRIES
      case 80: // ENUM
      case 81: // ERROR
      case 82: // EXIT
      case 83: // EXTERN
      case 84: // FOR
      case 85: // HEADER
      case 86: // HEADER_UNION
      case 87: // IF
      case 88: // IN
      case 89: // INOUT
      case 90: // INT
      case 91: // KEY
      case 92: // LIST
      case 93: // SELECT
      case 94: // MATCH_KIND
      case 95: // TYPE
      case 96: // OUT
      case 97: // PACKAGE
      case 98: // PARSER
      case 99: // PRAGMA
      case 100: // PRIORITY
      case 101: // RETURN
      case 102: // REGISTER
      case 103: // REGACTION
      case 104: // STATE
      case 105: // STRING
      case 106: // STRUCT
      case 107: // SWITCH
      case 108: // TABLE
      case 109: // TRANSITION
      case 110: // TUPLE
      case 111: // TYPEDEF
      case 112: // VARBIT
      case 113: // VALUESET
      case 114: // VOID
      case 115: // WHILE
      case 137: // annotationToken
        value.copy< Token > (that.value);
        break;

      case 119: // INTEGER
        value.copy< UnparsedConstant > (that.value);
        break;

      case 116: // IDENTIFIER
      case 117: // TYPE_IDENTIFIER
      case 118: // STRING_LITERAL
        value.copy< cstring > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  P4Parser::stack_symbol_type&
  P4Parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 193: // typeRef
      case 194: // namedType
      case 197: // p4listType
      case 198: // tupleType
      case 199: // headerStackType
      case 200: // specializedType
      case 201: // baseType
      case 202: // typeOrVoid
      case 206: // typeArg
      case 208: // realTypeArg
        value.move< ConstType* > (that.value);
        break;

      case 135: // annotation
        value.move< IR::Annotation* > (that.value);
        break;

      case 133: // optAnnotations
        value.move< IR::Annotations* > (that.value);
        break;

      case 270: // argument
        value.move< IR::Argument* > (that.value);
        break;

      case 148: // objInitializer
      case 165: // parserBlockStatement
      case 185: // controlBody
      case 242: // blockStatement
        value.move< IR::BlockStatement* > (that.value);
        break;

      case 147: // instantiation
      case 151: // objDeclaration
      case 156: // parserLocalElement
      case 178: // valueSetDeclaration
      case 184: // controlLocalDeclaration
      case 250: // tableDeclaration
      case 260: // actionDeclaration
      case 261: // registerActionDeclaration
      case 262: // variableDeclaration
      case 263: // registerDeclaration
      case 264: // constantDeclaration
      case 267: // functionDeclaration
        value.move< IR::Declaration* > (that.value);
        break;

      case 143: // direction
        value.move< IR::Direction > (that.value);
        break;

      case 257: // entry
        value.move< IR::Entry* > (that.value);
        break;

      case 125: // p4rtControllerType
      case 167: // transitionStatement
      case 168: // stateExpression
      case 169: // selectExpression
      case 172: // keysetExpression
      case 176: // reducedSimpleKeysetExpression
      case 177: // simpleKeysetExpression
      case 248: // switchLabel
      case 256: // actionRef
      case 258: // entryPriority
      case 265: // optInitializer
      case 266: // initializer
      case 275: // lvalue
      case 276: // expression
      case 277: // nonBraceExpression
      case 278: // intOrStr
        value.move< IR::Expression* > (that.value);
        break;

      case 129: // nonTypeName
      case 130: // name
      case 131: // nonTableKwName
      case 273: // dot_name
        value.move< IR::ID* > (that.value);
        break;

      case 255: // actionList
        value.move< IR::IndexedVector<IR::ActionListElement>* > (that.value);
        break;

      case 155: // parserLocalElements
      case 183: // controlLocalDeclarations
        value.move< IR::IndexedVector<IR::Declaration>* > (that.value);
        break;

      case 230: // identifierList
        value.move< IR::IndexedVector<IR::Declaration_ID>* > (that.value);
        break;

      case 138: // kvList
        value.move< IR::IndexedVector<IR::NamedExpression>* > (that.value);
        break;

      case 140: // parameterList
      case 141: // nonEmptyParameterList
      case 152: // optConstructorParameters
        value.move< IR::IndexedVector<IR::Parameter>* > (that.value);
        break;

      case 160: // parserStates
        value.move< IR::IndexedVector<IR::ParserState>* > (that.value);
        break;

      case 251: // tablePropertyList
        value.move< IR::IndexedVector<IR::Property>* > (that.value);
        break;

      case 226: // specifiedIdentifierList
        value.move< IR::IndexedVector<IR::SerEnumMember>* > (that.value);
        break;

      case 150: // objDeclarations
      case 163: // parserStatements
      case 244: // statOrDeclList
        value.move< IR::IndexedVector<IR::StatOrDecl>* > (that.value);
        break;

      case 221: // structFieldList
        value.move< IR::IndexedVector<IR::StructField>* > (that.value);
        break;

      case 205: // typeParameterList
        value.move< IR::IndexedVector<IR::Type_Var>* > (that.value);
        break;

      case 254: // keyElement
        value.move< IR::KeyElement* > (that.value);
        break;

      case 190: // functionPrototype
      case 192: // methodPrototype
        value.move< IR::Method* > (that.value);
        break;

      case 139: // kvPair
        value.move< IR::NamedExpression* > (that.value);
        break;

      case 124: // fragment
      case 128: // declaration
      case 186: // externDeclaration
      case 229: // matchKindDeclaration
        value.move< IR::Node* > (that.value);
        break;

      case 142: // parameter
        value.move< IR::Parameter* > (that.value);
        break;

      case 161: // parserState
        value.move< IR::ParserState* > (that.value);
        break;

      case 195: // prefixedType
      case 272: // prefixedNonTypeName
        value.move< IR::Path* > (that.value);
        break;

      case 252: // tableProperty
        value.move< IR::Property* > (that.value);
        break;

      case 171: // selectCase
        value.move< IR::SelectCase* > (that.value);
        break;

      case 227: // specifiedIdentifier
        value.move< IR::SerEnumMember* > (that.value);
        break;

      case 164: // parserStatement
      case 249: // statementOrDeclaration
        value.move< IR::StatOrDecl* > (that.value);
        break;

      case 232: // assignmentOrMethodCallStatement
      case 233: // emptyStatement
      case 234: // exitStatement
      case 235: // returnStatement
      case 236: // conditionalStatement
      case 237: // whileStatement
      case 238: // forStatement
      case 239: // forInitializer
      case 240: // directApplication
      case 241: // statement
      case 245: // switchStatement
        value.move< IR::Statement* > (that.value);
        break;

      case 222: // structField
        value.move< IR::StructField* > (that.value);
        break;

      case 247: // switchCase
        value.move< IR::SwitchCase* > (that.value);
        break;

      case 203: // optTypeParameters
      case 204: // typeParameters
        value.move< IR::TypeParameters* > (that.value);
        break;

      case 180: // controlTypeDeclaration
        value.move< IR::Type_Control* > (that.value);
        break;

      case 144: // packageTypeDeclaration
      case 154: // parserDeclaration
      case 179: // controlDeclaration
      case 210: // typeDeclaration
      case 211: // derivedTypeDeclaration
      case 212: // headerTypeDeclaration
      case 215: // structTypeDeclaration
      case 218: // headerUnionDeclaration
      case 223: // enumDeclaration
      case 231: // typedefDeclaration
        value.move< IR::Type_Declaration* > (that.value);
        break;

      case 228: // errorDeclaration
        value.move< IR::Type_Error* > (that.value);
        break;

      case 196: // typeName
        value.move< IR::Type_Name* > (that.value);
        break;

      case 157: // parserTypeDeclaration
        value.move< IR::Type_Parser* > (that.value);
        break;

      case 134: // annotations
        value.move< IR::Vector<IR::Annotation>* > (that.value);
        break;

      case 136: // annotationBody
        value.move< IR::Vector<IR::AnnotationToken>* > (that.value);
        break;

      case 268: // argumentList
      case 269: // nonEmptyArgList
        value.move< IR::Vector<IR::Argument>* > (that.value);
        break;

      case 259: // entriesList
        value.move< IR::Vector<IR::Entry>* > (that.value);
        break;

      case 173: // tupleKeysetExpression
      case 175: // simpleExpressionList
      case 271: // expressionList
      case 279: // intList
      case 280: // intOrStrList
      case 281: // strList
        value.move< IR::Vector<IR::Expression>* > (that.value);
        break;

      case 253: // keyElementList
        value.move< IR::Vector<IR::KeyElement>* > (that.value);
        break;

      case 189: // methodPrototypes
        value.move< IR::Vector<IR::Method>* > (that.value);
        break;

      case 170: // selectCaseList
        value.move< IR::Vector<IR::SelectCase>* > (that.value);
        break;

      case 246: // switchCases
        value.move< IR::Vector<IR::SwitchCase>* > (that.value);
        break;

      case 207: // typeArgumentList
      case 209: // realTypeArgumentList
        value.move< IR::Vector<IR::Type>* > (that.value);
        break;

      case 132: // optCONST
        value.move< OptionalConst > (that.value);
        break;

      case 22: // UNEXPECTED_TOKEN
      case 23: // END_PRAGMA
      case 24: // "<="
      case 25: // ">="
      case 26: // "<<"
      case 27: // "&&"
      case 28: // "||"
      case 29: // "!="
      case 30: // "=="
      case 31: // "+"
      case 32: // "-"
      case 33: // "|+|"
      case 34: // "|-|"
      case 35: // "*"
      case 36: // "{#}"
      case 37: // "/"
      case 38: // "%"
      case 39: // "|"
      case 40: // "&"
      case 41: // "^"
      case 42: // "~"
      case 43: // "["
      case 44: // "]"
      case 45: // "{"
      case 46: // "}"
      case 47: // "<"
      case 48: // L_ANGLE_ARGS
      case 49: // ">"
      case 50: // R_ANGLE_SHIFT
      case 51: // "("
      case 52: // ")"
      case 53: // "!"
      case 54: // ":"
      case 55: // ","
      case 56: // "?"
      case 57: // "."
      case 58: // "="
      case 59: // ";"
      case 60: // "@"
      case 61: // "++"
      case 62: // "_"
      case 63: // "&&&"
      case 64: // "..."
      case 65: // ".."
      case 66: // TRUE
      case 67: // FALSE
      case 68: // THIS
      case 69: // ABSTRACT
      case 70: // ACTION
      case 71: // ACTIONS
      case 72: // APPLY
      case 73: // BOOL
      case 74: // BIT
      case 75: // CONST
      case 76: // CONTROL
      case 77: // DEFAULT
      case 78: // ELSE
      case 79: // ENTRIES
      case 80: // ENUM
      case 81: // ERROR
      case 82: // EXIT
      case 83: // EXTERN
      case 84: // FOR
      case 85: // HEADER
      case 86: // HEADER_UNION
      case 87: // IF
      case 88: // IN
      case 89: // INOUT
      case 90: // INT
      case 91: // KEY
      case 92: // LIST
      case 93: // SELECT
      case 94: // MATCH_KIND
      case 95: // TYPE
      case 96: // OUT
      case 97: // PACKAGE
      case 98: // PARSER
      case 99: // PRAGMA
      case 100: // PRIORITY
      case 101: // RETURN
      case 102: // REGISTER
      case 103: // REGACTION
      case 104: // STATE
      case 105: // STRING
      case 106: // STRUCT
      case 107: // SWITCH
      case 108: // TABLE
      case 109: // TRANSITION
      case 110: // TUPLE
      case 111: // TYPEDEF
      case 112: // VARBIT
      case 113: // VALUESET
      case 114: // VOID
      case 115: // WHILE
      case 137: // annotationToken
        value.move< Token > (that.value);
        break;

      case 119: // INTEGER
        value.move< UnparsedConstant > (that.value);
        break;

      case 116: // IDENTIFIER
      case 117: // TYPE_IDENTIFIER
      case 118: // STRING_LITERAL
        value.move< cstring > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  P4Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  P4Parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    switch (yytype)
    {
      case 22: // UNEXPECTED_TOKEN
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1928 "p4parser.tab.cpp"
        break;

      case 23: // END_PRAGMA
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1934 "p4parser.tab.cpp"
        break;

      case 24: // "<="
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1940 "p4parser.tab.cpp"
        break;

      case 25: // ">="
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1946 "p4parser.tab.cpp"
        break;

      case 26: // "<<"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1952 "p4parser.tab.cpp"
        break;

      case 27: // "&&"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1958 "p4parser.tab.cpp"
        break;

      case 28: // "||"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1964 "p4parser.tab.cpp"
        break;

      case 29: // "!="
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1970 "p4parser.tab.cpp"
        break;

      case 30: // "=="
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1976 "p4parser.tab.cpp"
        break;

      case 31: // "+"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1982 "p4parser.tab.cpp"
        break;

      case 32: // "-"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1988 "p4parser.tab.cpp"
        break;

      case 33: // "|+|"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 1994 "p4parser.tab.cpp"
        break;

      case 34: // "|-|"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2000 "p4parser.tab.cpp"
        break;

      case 35: // "*"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2006 "p4parser.tab.cpp"
        break;

      case 36: // "{#}"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2012 "p4parser.tab.cpp"
        break;

      case 37: // "/"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2018 "p4parser.tab.cpp"
        break;

      case 38: // "%"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2024 "p4parser.tab.cpp"
        break;

      case 39: // "|"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2030 "p4parser.tab.cpp"
        break;

      case 40: // "&"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2036 "p4parser.tab.cpp"
        break;

      case 41: // "^"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2042 "p4parser.tab.cpp"
        break;

      case 42: // "~"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2048 "p4parser.tab.cpp"
        break;

      case 43: // "["
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2054 "p4parser.tab.cpp"
        break;

      case 44: // "]"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2060 "p4parser.tab.cpp"
        break;

      case 45: // "{"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2066 "p4parser.tab.cpp"
        break;

      case 46: // "}"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2072 "p4parser.tab.cpp"
        break;

      case 47: // "<"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2078 "p4parser.tab.cpp"
        break;

      case 48: // L_ANGLE_ARGS
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2084 "p4parser.tab.cpp"
        break;

      case 49: // ">"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2090 "p4parser.tab.cpp"
        break;

      case 50: // R_ANGLE_SHIFT
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2096 "p4parser.tab.cpp"
        break;

      case 51: // "("
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2102 "p4parser.tab.cpp"
        break;

      case 52: // ")"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2108 "p4parser.tab.cpp"
        break;

      case 53: // "!"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2114 "p4parser.tab.cpp"
        break;

      case 54: // ":"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2120 "p4parser.tab.cpp"
        break;

      case 55: // ","
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2126 "p4parser.tab.cpp"
        break;

      case 56: // "?"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2132 "p4parser.tab.cpp"
        break;

      case 57: // "."
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2138 "p4parser.tab.cpp"
        break;

      case 58: // "="
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2144 "p4parser.tab.cpp"
        break;

      case 59: // ";"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2150 "p4parser.tab.cpp"
        break;

      case 60: // "@"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2156 "p4parser.tab.cpp"
        break;

      case 61: // "++"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2162 "p4parser.tab.cpp"
        break;

      case 62: // "_"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2168 "p4parser.tab.cpp"
        break;

      case 63: // "&&&"
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2174 "p4parser.tab.cpp"
        break;

      case 64: // "..."
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2180 "p4parser.tab.cpp"
        break;

      case 65: // ".."
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2186 "p4parser.tab.cpp"
        break;

      case 66: // TRUE
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2192 "p4parser.tab.cpp"
        break;

      case 67: // FALSE
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2198 "p4parser.tab.cpp"
        break;

      case 68: // THIS
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2204 "p4parser.tab.cpp"
        break;

      case 69: // ABSTRACT
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2210 "p4parser.tab.cpp"
        break;

      case 70: // ACTION
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2216 "p4parser.tab.cpp"
        break;

      case 71: // ACTIONS
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2222 "p4parser.tab.cpp"
        break;

      case 72: // APPLY
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2228 "p4parser.tab.cpp"
        break;

      case 73: // BOOL
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2234 "p4parser.tab.cpp"
        break;

      case 74: // BIT
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2240 "p4parser.tab.cpp"
        break;

      case 75: // CONST
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2246 "p4parser.tab.cpp"
        break;

      case 76: // CONTROL
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2252 "p4parser.tab.cpp"
        break;

      case 77: // DEFAULT
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2258 "p4parser.tab.cpp"
        break;

      case 78: // ELSE
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2264 "p4parser.tab.cpp"
        break;

      case 79: // ENTRIES
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2270 "p4parser.tab.cpp"
        break;

      case 80: // ENUM
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2276 "p4parser.tab.cpp"
        break;

      case 81: // ERROR
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2282 "p4parser.tab.cpp"
        break;

      case 82: // EXIT
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2288 "p4parser.tab.cpp"
        break;

      case 83: // EXTERN
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2294 "p4parser.tab.cpp"
        break;

      case 84: // FOR
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2300 "p4parser.tab.cpp"
        break;

      case 85: // HEADER
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2306 "p4parser.tab.cpp"
        break;

      case 86: // HEADER_UNION
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2312 "p4parser.tab.cpp"
        break;

      case 87: // IF
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2318 "p4parser.tab.cpp"
        break;

      case 88: // IN
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2324 "p4parser.tab.cpp"
        break;

      case 89: // INOUT
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2330 "p4parser.tab.cpp"
        break;

      case 90: // INT
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2336 "p4parser.tab.cpp"
        break;

      case 91: // KEY
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2342 "p4parser.tab.cpp"
        break;

      case 92: // LIST
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2348 "p4parser.tab.cpp"
        break;

      case 93: // SELECT
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2354 "p4parser.tab.cpp"
        break;

      case 94: // MATCH_KIND
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2360 "p4parser.tab.cpp"
        break;

      case 95: // TYPE
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2366 "p4parser.tab.cpp"
        break;

      case 96: // OUT
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2372 "p4parser.tab.cpp"
        break;

      case 97: // PACKAGE
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2378 "p4parser.tab.cpp"
        break;

      case 98: // PARSER
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2384 "p4parser.tab.cpp"
        break;

      case 99: // PRAGMA
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2390 "p4parser.tab.cpp"
        break;

      case 100: // PRIORITY
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2396 "p4parser.tab.cpp"
        break;

      case 101: // RETURN
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2402 "p4parser.tab.cpp"
        break;

      case 102: // REGISTER
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2408 "p4parser.tab.cpp"
        break;

      case 103: // REGACTION
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2414 "p4parser.tab.cpp"
        break;

      case 104: // STATE
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2420 "p4parser.tab.cpp"
        break;

      case 105: // STRING
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2426 "p4parser.tab.cpp"
        break;

      case 106: // STRUCT
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2432 "p4parser.tab.cpp"
        break;

      case 107: // SWITCH
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2438 "p4parser.tab.cpp"
        break;

      case 108: // TABLE
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2444 "p4parser.tab.cpp"
        break;

      case 109: // TRANSITION
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2450 "p4parser.tab.cpp"
        break;

      case 110: // TUPLE
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2456 "p4parser.tab.cpp"
        break;

      case 111: // TYPEDEF
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2462 "p4parser.tab.cpp"
        break;

      case 112: // VARBIT
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2468 "p4parser.tab.cpp"
        break;

      case 113: // VALUESET
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2474 "p4parser.tab.cpp"
        break;

      case 114: // VOID
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2480 "p4parser.tab.cpp"
        break;

      case 115: // WHILE
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2486 "p4parser.tab.cpp"
        break;

      case 116: // IDENTIFIER
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 2492 "p4parser.tab.cpp"
        break;

      case 117: // TYPE_IDENTIFIER
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 2498 "p4parser.tab.cpp"
        break;

      case 118: // STRING_LITERAL
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < cstring > (); }
#line 2504 "p4parser.tab.cpp"
        break;

      case 119: // INTEGER
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < UnparsedConstant > (); }
#line 2510 "p4parser.tab.cpp"
        break;

      case 124: // fragment
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Node* > (); }
#line 2516 "p4parser.tab.cpp"
        break;

      case 125: // p4rtControllerType
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2522 "p4parser.tab.cpp"
        break;

      case 128: // declaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Node* > (); }
#line 2528 "p4parser.tab.cpp"
        break;

      case 129: // nonTypeName
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::ID* > (); }
#line 2534 "p4parser.tab.cpp"
        break;

      case 130: // name
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::ID* > (); }
#line 2540 "p4parser.tab.cpp"
        break;

      case 131: // nonTableKwName
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::ID* > (); }
#line 2546 "p4parser.tab.cpp"
        break;

      case 132: // optCONST
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < OptionalConst > (); }
#line 2552 "p4parser.tab.cpp"
        break;

      case 133: // optAnnotations
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Annotations* > (); }
#line 2558 "p4parser.tab.cpp"
        break;

      case 134: // annotations
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Annotation>* > (); }
#line 2564 "p4parser.tab.cpp"
        break;

      case 135: // annotation
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Annotation* > (); }
#line 2570 "p4parser.tab.cpp"
        break;

      case 136: // annotationBody
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::AnnotationToken>* > (); }
#line 2576 "p4parser.tab.cpp"
        break;

      case 137: // annotationToken
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < Token > (); }
#line 2582 "p4parser.tab.cpp"
        break;

      case 138: // kvList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::NamedExpression>* > (); }
#line 2588 "p4parser.tab.cpp"
        break;

      case 139: // kvPair
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::NamedExpression* > (); }
#line 2594 "p4parser.tab.cpp"
        break;

      case 140: // parameterList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Parameter>* > (); }
#line 2600 "p4parser.tab.cpp"
        break;

      case 141: // nonEmptyParameterList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Parameter>* > (); }
#line 2606 "p4parser.tab.cpp"
        break;

      case 142: // parameter
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Parameter* > (); }
#line 2612 "p4parser.tab.cpp"
        break;

      case 143: // direction
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Direction > (); }
#line 2618 "p4parser.tab.cpp"
        break;

      case 144: // packageTypeDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 2624 "p4parser.tab.cpp"
        break;

      case 147: // instantiation
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 2630 "p4parser.tab.cpp"
        break;

      case 148: // objInitializer
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::BlockStatement* > (); }
#line 2636 "p4parser.tab.cpp"
        break;

      case 150: // objDeclarations
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::StatOrDecl>* > (); }
#line 2642 "p4parser.tab.cpp"
        break;

      case 151: // objDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 2648 "p4parser.tab.cpp"
        break;

      case 152: // optConstructorParameters
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Parameter>* > (); }
#line 2654 "p4parser.tab.cpp"
        break;

      case 154: // parserDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 2660 "p4parser.tab.cpp"
        break;

      case 155: // parserLocalElements
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Declaration>* > (); }
#line 2666 "p4parser.tab.cpp"
        break;

      case 156: // parserLocalElement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 2672 "p4parser.tab.cpp"
        break;

      case 157: // parserTypeDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Parser* > (); }
#line 2678 "p4parser.tab.cpp"
        break;

      case 160: // parserStates
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::ParserState>* > (); }
#line 2684 "p4parser.tab.cpp"
        break;

      case 161: // parserState
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::ParserState* > (); }
#line 2690 "p4parser.tab.cpp"
        break;

      case 163: // parserStatements
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::StatOrDecl>* > (); }
#line 2696 "p4parser.tab.cpp"
        break;

      case 164: // parserStatement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::StatOrDecl* > (); }
#line 2702 "p4parser.tab.cpp"
        break;

      case 165: // parserBlockStatement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::BlockStatement* > (); }
#line 2708 "p4parser.tab.cpp"
        break;

      case 167: // transitionStatement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2714 "p4parser.tab.cpp"
        break;

      case 168: // stateExpression
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2720 "p4parser.tab.cpp"
        break;

      case 169: // selectExpression
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2726 "p4parser.tab.cpp"
        break;

      case 170: // selectCaseList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::SelectCase>* > (); }
#line 2732 "p4parser.tab.cpp"
        break;

      case 171: // selectCase
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::SelectCase* > (); }
#line 2738 "p4parser.tab.cpp"
        break;

      case 172: // keysetExpression
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2744 "p4parser.tab.cpp"
        break;

      case 173: // tupleKeysetExpression
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Expression>* > (); }
#line 2750 "p4parser.tab.cpp"
        break;

      case 175: // simpleExpressionList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Expression>* > (); }
#line 2756 "p4parser.tab.cpp"
        break;

      case 176: // reducedSimpleKeysetExpression
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2762 "p4parser.tab.cpp"
        break;

      case 177: // simpleKeysetExpression
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 2768 "p4parser.tab.cpp"
        break;

      case 178: // valueSetDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 2774 "p4parser.tab.cpp"
        break;

      case 179: // controlDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 2780 "p4parser.tab.cpp"
        break;

      case 180: // controlTypeDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Control* > (); }
#line 2786 "p4parser.tab.cpp"
        break;

      case 183: // controlLocalDeclarations
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Declaration>* > (); }
#line 2792 "p4parser.tab.cpp"
        break;

      case 184: // controlLocalDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 2798 "p4parser.tab.cpp"
        break;

      case 185: // controlBody
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::BlockStatement* > (); }
#line 2804 "p4parser.tab.cpp"
        break;

      case 186: // externDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Node* > (); }
#line 2810 "p4parser.tab.cpp"
        break;

      case 189: // methodPrototypes
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Method>* > (); }
#line 2816 "p4parser.tab.cpp"
        break;

      case 190: // functionPrototype
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Method* > (); }
#line 2822 "p4parser.tab.cpp"
        break;

      case 192: // methodPrototype
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Method* > (); }
#line 2828 "p4parser.tab.cpp"
        break;

      case 193: // typeRef
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2834 "p4parser.tab.cpp"
        break;

      case 194: // namedType
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2840 "p4parser.tab.cpp"
        break;

      case 195: // prefixedType
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Path* > (); }
#line 2846 "p4parser.tab.cpp"
        break;

      case 196: // typeName
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Name* > (); }
#line 2852 "p4parser.tab.cpp"
        break;

      case 197: // p4listType
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2858 "p4parser.tab.cpp"
        break;

      case 198: // tupleType
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2864 "p4parser.tab.cpp"
        break;

      case 199: // headerStackType
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2870 "p4parser.tab.cpp"
        break;

      case 200: // specializedType
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2876 "p4parser.tab.cpp"
        break;

      case 201: // baseType
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2882 "p4parser.tab.cpp"
        break;

      case 202: // typeOrVoid
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2888 "p4parser.tab.cpp"
        break;

      case 203: // optTypeParameters
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::TypeParameters* > (); }
#line 2894 "p4parser.tab.cpp"
        break;

      case 204: // typeParameters
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::TypeParameters* > (); }
#line 2900 "p4parser.tab.cpp"
        break;

      case 205: // typeParameterList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Type_Var>* > (); }
#line 2906 "p4parser.tab.cpp"
        break;

      case 206: // typeArg
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2912 "p4parser.tab.cpp"
        break;

      case 207: // typeArgumentList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Type>* > (); }
#line 2918 "p4parser.tab.cpp"
        break;

      case 208: // realTypeArg
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < ConstType* > (); }
#line 2924 "p4parser.tab.cpp"
        break;

      case 209: // realTypeArgumentList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Type>* > (); }
#line 2930 "p4parser.tab.cpp"
        break;

      case 210: // typeDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 2936 "p4parser.tab.cpp"
        break;

      case 211: // derivedTypeDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 2942 "p4parser.tab.cpp"
        break;

      case 212: // headerTypeDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 2948 "p4parser.tab.cpp"
        break;

      case 215: // structTypeDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 2954 "p4parser.tab.cpp"
        break;

      case 218: // headerUnionDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 2960 "p4parser.tab.cpp"
        break;

      case 221: // structFieldList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::StructField>* > (); }
#line 2966 "p4parser.tab.cpp"
        break;

      case 222: // structField
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::StructField* > (); }
#line 2972 "p4parser.tab.cpp"
        break;

      case 223: // enumDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 2978 "p4parser.tab.cpp"
        break;

      case 226: // specifiedIdentifierList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::SerEnumMember>* > (); }
#line 2984 "p4parser.tab.cpp"
        break;

      case 227: // specifiedIdentifier
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::SerEnumMember* > (); }
#line 2990 "p4parser.tab.cpp"
        break;

      case 228: // errorDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Error* > (); }
#line 2996 "p4parser.tab.cpp"
        break;

      case 229: // matchKindDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Node* > (); }
#line 3002 "p4parser.tab.cpp"
        break;

      case 230: // identifierList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Declaration_ID>* > (); }
#line 3008 "p4parser.tab.cpp"
        break;

      case 231: // typedefDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Type_Declaration* > (); }
#line 3014 "p4parser.tab.cpp"
        break;

      case 232: // assignmentOrMethodCallStatement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3020 "p4parser.tab.cpp"
        break;

      case 233: // emptyStatement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3026 "p4parser.tab.cpp"
        break;

      case 234: // exitStatement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3032 "p4parser.tab.cpp"
        break;

      case 235: // returnStatement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3038 "p4parser.tab.cpp"
        break;

      case 236: // conditionalStatement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3044 "p4parser.tab.cpp"
        break;

      case 237: // whileStatement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3050 "p4parser.tab.cpp"
        break;

      case 238: // forStatement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3056 "p4parser.tab.cpp"
        break;

      case 239: // forInitializer
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3062 "p4parser.tab.cpp"
        break;

      case 240: // directApplication
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3068 "p4parser.tab.cpp"
        break;

      case 241: // statement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3074 "p4parser.tab.cpp"
        break;

      case 242: // blockStatement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::BlockStatement* > (); }
#line 3080 "p4parser.tab.cpp"
        break;

      case 244: // statOrDeclList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::StatOrDecl>* > (); }
#line 3086 "p4parser.tab.cpp"
        break;

      case 245: // switchStatement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Statement* > (); }
#line 3092 "p4parser.tab.cpp"
        break;

      case 246: // switchCases
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::SwitchCase>* > (); }
#line 3098 "p4parser.tab.cpp"
        break;

      case 247: // switchCase
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::SwitchCase* > (); }
#line 3104 "p4parser.tab.cpp"
        break;

      case 248: // switchLabel
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3110 "p4parser.tab.cpp"
        break;

      case 249: // statementOrDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::StatOrDecl* > (); }
#line 3116 "p4parser.tab.cpp"
        break;

      case 250: // tableDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 3122 "p4parser.tab.cpp"
        break;

      case 251: // tablePropertyList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::Property>* > (); }
#line 3128 "p4parser.tab.cpp"
        break;

      case 252: // tableProperty
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Property* > (); }
#line 3134 "p4parser.tab.cpp"
        break;

      case 253: // keyElementList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::KeyElement>* > (); }
#line 3140 "p4parser.tab.cpp"
        break;

      case 254: // keyElement
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::KeyElement* > (); }
#line 3146 "p4parser.tab.cpp"
        break;

      case 255: // actionList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::IndexedVector<IR::ActionListElement>* > (); }
#line 3152 "p4parser.tab.cpp"
        break;

      case 256: // actionRef
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3158 "p4parser.tab.cpp"
        break;

      case 257: // entry
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Entry* > (); }
#line 3164 "p4parser.tab.cpp"
        break;

      case 258: // entryPriority
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3170 "p4parser.tab.cpp"
        break;

      case 259: // entriesList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Entry>* > (); }
#line 3176 "p4parser.tab.cpp"
        break;

      case 260: // actionDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 3182 "p4parser.tab.cpp"
        break;

      case 261: // registerActionDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 3188 "p4parser.tab.cpp"
        break;

      case 262: // variableDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 3194 "p4parser.tab.cpp"
        break;

      case 263: // registerDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 3200 "p4parser.tab.cpp"
        break;

      case 264: // constantDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 3206 "p4parser.tab.cpp"
        break;

      case 265: // optInitializer
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3212 "p4parser.tab.cpp"
        break;

      case 266: // initializer
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3218 "p4parser.tab.cpp"
        break;

      case 267: // functionDeclaration
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Declaration* > (); }
#line 3224 "p4parser.tab.cpp"
        break;

      case 268: // argumentList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Argument>* > (); }
#line 3230 "p4parser.tab.cpp"
        break;

      case 269: // nonEmptyArgList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Argument>* > (); }
#line 3236 "p4parser.tab.cpp"
        break;

      case 270: // argument
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Argument* > (); }
#line 3242 "p4parser.tab.cpp"
        break;

      case 271: // expressionList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Expression>* > (); }
#line 3248 "p4parser.tab.cpp"
        break;

      case 272: // prefixedNonTypeName
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Path* > (); }
#line 3254 "p4parser.tab.cpp"
        break;

      case 273: // dot_name
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::ID* > (); }
#line 3260 "p4parser.tab.cpp"
        break;

      case 275: // lvalue
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3266 "p4parser.tab.cpp"
        break;

      case 276: // expression
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3272 "p4parser.tab.cpp"
        break;

      case 277: // nonBraceExpression
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3278 "p4parser.tab.cpp"
        break;

      case 278: // intOrStr
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Expression* > (); }
#line 3284 "p4parser.tab.cpp"
        break;

      case 279: // intList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Expression>* > (); }
#line 3290 "p4parser.tab.cpp"
        break;

      case 280: // intOrStrList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Expression>* > (); }
#line 3296 "p4parser.tab.cpp"
        break;

      case 281: // strList
#line 144 "p4parser.ypp"
                 { yyoutput << yysym.value.template as < IR::Vector<IR::Expression>* > (); }
#line 3302 "p4parser.tab.cpp"
        break;

      default:
        break;
    }
    yyo << ')';
  }
#endif

  void
  P4Parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  P4Parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  P4Parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  P4Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  P4Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  P4Parser::debug_level_type
  P4Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  P4Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  P4Parser::state_type
  P4Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  P4Parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  P4Parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  P4Parser::operator() ()
  {
    return parse ();
  }

  int
  P4Parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 193: // typeRef
      case 194: // namedType
      case 197: // p4listType
      case 198: // tupleType
      case 199: // headerStackType
      case 200: // specializedType
      case 201: // baseType
      case 202: // typeOrVoid
      case 206: // typeArg
      case 208: // realTypeArg
        yylhs.value.emplace< ConstType* > ();
        break;

      case 135: // annotation
        yylhs.value.emplace< IR::Annotation* > ();
        break;

      case 133: // optAnnotations
        yylhs.value.emplace< IR::Annotations* > ();
        break;

      case 270: // argument
        yylhs.value.emplace< IR::Argument* > ();
        break;

      case 148: // objInitializer
      case 165: // parserBlockStatement
      case 185: // controlBody
      case 242: // blockStatement
        yylhs.value.emplace< IR::BlockStatement* > ();
        break;

      case 147: // instantiation
      case 151: // objDeclaration
      case 156: // parserLocalElement
      case 178: // valueSetDeclaration
      case 184: // controlLocalDeclaration
      case 250: // tableDeclaration
      case 260: // actionDeclaration
      case 261: // registerActionDeclaration
      case 262: // variableDeclaration
      case 263: // registerDeclaration
      case 264: // constantDeclaration
      case 267: // functionDeclaration
        yylhs.value.emplace< IR::Declaration* > ();
        break;

      case 143: // direction
        yylhs.value.emplace< IR::Direction > ();
        break;

      case 257: // entry
        yylhs.value.emplace< IR::Entry* > ();
        break;

      case 125: // p4rtControllerType
      case 167: // transitionStatement
      case 168: // stateExpression
      case 169: // selectExpression
      case 172: // keysetExpression
      case 176: // reducedSimpleKeysetExpression
      case 177: // simpleKeysetExpression
      case 248: // switchLabel
      case 256: // actionRef
      case 258: // entryPriority
      case 265: // optInitializer
      case 266: // initializer
      case 275: // lvalue
      case 276: // expression
      case 277: // nonBraceExpression
      case 278: // intOrStr
        yylhs.value.emplace< IR::Expression* > ();
        break;

      case 129: // nonTypeName
      case 130: // name
      case 131: // nonTableKwName
      case 273: // dot_name
        yylhs.value.emplace< IR::ID* > ();
        break;

      case 255: // actionList
        yylhs.value.emplace< IR::IndexedVector<IR::ActionListElement>* > ();
        break;

      case 155: // parserLocalElements
      case 183: // controlLocalDeclarations
        yylhs.value.emplace< IR::IndexedVector<IR::Declaration>* > ();
        break;

      case 230: // identifierList
        yylhs.value.emplace< IR::IndexedVector<IR::Declaration_ID>* > ();
        break;

      case 138: // kvList
        yylhs.value.emplace< IR::IndexedVector<IR::NamedExpression>* > ();
        break;

      case 140: // parameterList
      case 141: // nonEmptyParameterList
      case 152: // optConstructorParameters
        yylhs.value.emplace< IR::IndexedVector<IR::Parameter>* > ();
        break;

      case 160: // parserStates
        yylhs.value.emplace< IR::IndexedVector<IR::ParserState>* > ();
        break;

      case 251: // tablePropertyList
        yylhs.value.emplace< IR::IndexedVector<IR::Property>* > ();
        break;

      case 226: // specifiedIdentifierList
        yylhs.value.emplace< IR::IndexedVector<IR::SerEnumMember>* > ();
        break;

      case 150: // objDeclarations
      case 163: // parserStatements
      case 244: // statOrDeclList
        yylhs.value.emplace< IR::IndexedVector<IR::StatOrDecl>* > ();
        break;

      case 221: // structFieldList
        yylhs.value.emplace< IR::IndexedVector<IR::StructField>* > ();
        break;

      case 205: // typeParameterList
        yylhs.value.emplace< IR::IndexedVector<IR::Type_Var>* > ();
        break;

      case 254: // keyElement
        yylhs.value.emplace< IR::KeyElement* > ();
        break;

      case 190: // functionPrototype
      case 192: // methodPrototype
        yylhs.value.emplace< IR::Method* > ();
        break;

      case 139: // kvPair
        yylhs.value.emplace< IR::NamedExpression* > ();
        break;

      case 124: // fragment
      case 128: // declaration
      case 186: // externDeclaration
      case 229: // matchKindDeclaration
        yylhs.value.emplace< IR::Node* > ();
        break;

      case 142: // parameter
        yylhs.value.emplace< IR::Parameter* > ();
        break;

      case 161: // parserState
        yylhs.value.emplace< IR::ParserState* > ();
        break;

      case 195: // prefixedType
      case 272: // prefixedNonTypeName
        yylhs.value.emplace< IR::Path* > ();
        break;

      case 252: // tableProperty
        yylhs.value.emplace< IR::Property* > ();
        break;

      case 171: // selectCase
        yylhs.value.emplace< IR::SelectCase* > ();
        break;

      case 227: // specifiedIdentifier
        yylhs.value.emplace< IR::SerEnumMember* > ();
        break;

      case 164: // parserStatement
      case 249: // statementOrDeclaration
        yylhs.value.emplace< IR::StatOrDecl* > ();
        break;

      case 232: // assignmentOrMethodCallStatement
      case 233: // emptyStatement
      case 234: // exitStatement
      case 235: // returnStatement
      case 236: // conditionalStatement
      case 237: // whileStatement
      case 238: // forStatement
      case 239: // forInitializer
      case 240: // directApplication
      case 241: // statement
      case 245: // switchStatement
        yylhs.value.emplace< IR::Statement* > ();
        break;

      case 222: // structField
        yylhs.value.emplace< IR::StructField* > ();
        break;

      case 247: // switchCase
        yylhs.value.emplace< IR::SwitchCase* > ();
        break;

      case 203: // optTypeParameters
      case 204: // typeParameters
        yylhs.value.emplace< IR::TypeParameters* > ();
        break;

      case 180: // controlTypeDeclaration
        yylhs.value.emplace< IR::Type_Control* > ();
        break;

      case 144: // packageTypeDeclaration
      case 154: // parserDeclaration
      case 179: // controlDeclaration
      case 210: // typeDeclaration
      case 211: // derivedTypeDeclaration
      case 212: // headerTypeDeclaration
      case 215: // structTypeDeclaration
      case 218: // headerUnionDeclaration
      case 223: // enumDeclaration
      case 231: // typedefDeclaration
        yylhs.value.emplace< IR::Type_Declaration* > ();
        break;

      case 228: // errorDeclaration
        yylhs.value.emplace< IR::Type_Error* > ();
        break;

      case 196: // typeName
        yylhs.value.emplace< IR::Type_Name* > ();
        break;

      case 157: // parserTypeDeclaration
        yylhs.value.emplace< IR::Type_Parser* > ();
        break;

      case 134: // annotations
        yylhs.value.emplace< IR::Vector<IR::Annotation>* > ();
        break;

      case 136: // annotationBody
        yylhs.value.emplace< IR::Vector<IR::AnnotationToken>* > ();
        break;

      case 268: // argumentList
      case 269: // nonEmptyArgList
        yylhs.value.emplace< IR::Vector<IR::Argument>* > ();
        break;

      case 259: // entriesList
        yylhs.value.emplace< IR::Vector<IR::Entry>* > ();
        break;

      case 173: // tupleKeysetExpression
      case 175: // simpleExpressionList
      case 271: // expressionList
      case 279: // intList
      case 280: // intOrStrList
      case 281: // strList
        yylhs.value.emplace< IR::Vector<IR::Expression>* > ();
        break;

      case 253: // keyElementList
        yylhs.value.emplace< IR::Vector<IR::KeyElement>* > ();
        break;

      case 189: // methodPrototypes
        yylhs.value.emplace< IR::Vector<IR::Method>* > ();
        break;

      case 170: // selectCaseList
        yylhs.value.emplace< IR::Vector<IR::SelectCase>* > ();
        break;

      case 246: // switchCases
        yylhs.value.emplace< IR::Vector<IR::SwitchCase>* > ();
        break;

      case 207: // typeArgumentList
      case 209: // realTypeArgumentList
        yylhs.value.emplace< IR::Vector<IR::Type>* > ();
        break;

      case 132: // optCONST
        yylhs.value.emplace< OptionalConst > ();
        break;

      case 22: // UNEXPECTED_TOKEN
      case 23: // END_PRAGMA
      case 24: // "<="
      case 25: // ">="
      case 26: // "<<"
      case 27: // "&&"
      case 28: // "||"
      case 29: // "!="
      case 30: // "=="
      case 31: // "+"
      case 32: // "-"
      case 33: // "|+|"
      case 34: // "|-|"
      case 35: // "*"
      case 36: // "{#}"
      case 37: // "/"
      case 38: // "%"
      case 39: // "|"
      case 40: // "&"
      case 41: // "^"
      case 42: // "~"
      case 43: // "["
      case 44: // "]"
      case 45: // "{"
      case 46: // "}"
      case 47: // "<"
      case 48: // L_ANGLE_ARGS
      case 49: // ">"
      case 50: // R_ANGLE_SHIFT
      case 51: // "("
      case 52: // ")"
      case 53: // "!"
      case 54: // ":"
      case 55: // ","
      case 56: // "?"
      case 57: // "."
      case 58: // "="
      case 59: // ";"
      case 60: // "@"
      case 61: // "++"
      case 62: // "_"
      case 63: // "&&&"
      case 64: // "..."
      case 65: // ".."
      case 66: // TRUE
      case 67: // FALSE
      case 68: // THIS
      case 69: // ABSTRACT
      case 70: // ACTION
      case 71: // ACTIONS
      case 72: // APPLY
      case 73: // BOOL
      case 74: // BIT
      case 75: // CONST
      case 76: // CONTROL
      case 77: // DEFAULT
      case 78: // ELSE
      case 79: // ENTRIES
      case 80: // ENUM
      case 81: // ERROR
      case 82: // EXIT
      case 83: // EXTERN
      case 84: // FOR
      case 85: // HEADER
      case 86: // HEADER_UNION
      case 87: // IF
      case 88: // IN
      case 89: // INOUT
      case 90: // INT
      case 91: // KEY
      case 92: // LIST
      case 93: // SELECT
      case 94: // MATCH_KIND
      case 95: // TYPE
      case 96: // OUT
      case 97: // PACKAGE
      case 98: // PARSER
      case 99: // PRAGMA
      case 100: // PRIORITY
      case 101: // RETURN
      case 102: // REGISTER
      case 103: // REGACTION
      case 104: // STATE
      case 105: // STRING
      case 106: // STRUCT
      case 107: // SWITCH
      case 108: // TABLE
      case 109: // TRANSITION
      case 110: // TUPLE
      case 111: // TYPEDEF
      case 112: // VARBIT
      case 113: // VALUESET
      case 114: // VOID
      case 115: // WHILE
      case 137: // annotationToken
        yylhs.value.emplace< Token > ();
        break;

      case 119: // INTEGER
        yylhs.value.emplace< UnparsedConstant > ();
        break;

      case 116: // IDENTIFIER
      case 117: // TYPE_IDENTIFIER
      case 118: // STRING_LITERAL
        yylhs.value.emplace< cstring > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2:
#line 362 "p4parser.ypp"
                              { driver.nodes->push_back(yystack_[1].value.as < IR::Node* > ()->getNode()); YYACCEPT; }
#line 3938 "p4parser.tab.cpp"
    break;

  case 4:
#line 368 "p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Vector<IR::Expression>* > (); }
#line 3944 "p4parser.tab.cpp"
    break;

  case 5:
#line 369 "p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::IndexedVector<IR::NamedExpression>* > (); }
#line 3950 "p4parser.tab.cpp"
    break;

  case 6:
#line 370 "p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Vector<IR::Expression>* > (); }
#line 3956 "p4parser.tab.cpp"
    break;

  case 7:
#line 371 "p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Vector<IR::Expression>* > (); }
#line 3962 "p4parser.tab.cpp"
    break;

  case 8:
#line 372 "p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Vector<IR::Expression>* > (); }
#line 3968 "p4parser.tab.cpp"
    break;

  case 9:
#line 375 "p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 3974 "p4parser.tab.cpp"
    break;

  case 10:
#line 376 "p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0); }
#line 3980 "p4parser.tab.cpp"
    break;

  case 11:
#line 377 "p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 3986 "p4parser.tab.cpp"
    break;

  case 12:
#line 378 "p4parser.ypp"
                                                        { yylhs.value.as < IR::Node* > () = new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 3992 "p4parser.tab.cpp"
    break;

  case 13:
#line 382 "p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(yystack_[2].value.as < IR::Expression* > ());
          result->push_back(yystack_[0].value.as < IR::Expression* > ());
          result->srcInfo = yystack_[2].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4002 "p4parser.tab.cpp"
    break;

  case 14:
#line 388 "p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(parseConstant(yystack_[2].location, yystack_[2].value.as < UnparsedConstant > (), 0));
          result->push_back(parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0));
          result->srcInfo = yystack_[2].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4012 "p4parser.tab.cpp"
    break;

  case 15:
#line 394 "p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(new IR::StringLiteral(yystack_[2].location, yystack_[2].value.as < cstring > ()));
          result->push_back(new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()));
          result->srcInfo = yystack_[2].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4022 "p4parser.tab.cpp"
    break;

  case 16:
#line 402 "p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(yystack_[4].value.as < IR::Expression* > ());
          result->push_back(yystack_[2].value.as < IR::Expression* > ());
          result->push_back(yystack_[0].value.as < IR::Expression* > ());
          result->srcInfo = yystack_[4].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4033 "p4parser.tab.cpp"
    break;

  case 17:
#line 409 "p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(parseConstant(yystack_[4].location, yystack_[4].value.as < UnparsedConstant > (), 0));
          result->push_back(parseConstant(yystack_[2].location, yystack_[2].value.as < UnparsedConstant > (), 0));
          result->push_back(parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0));
          result->srcInfo = yystack_[4].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4044 "p4parser.tab.cpp"
    break;

  case 18:
#line 417 "p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(new IR::StringLiteral(yystack_[4].location, yystack_[4].value.as < cstring > ()));
          result->push_back(new IR::StringLiteral(yystack_[2].location, yystack_[2].value.as < cstring > ()));
          result->push_back(new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()));
          result->srcInfo = yystack_[4].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4055 "p4parser.tab.cpp"
    break;

  case 19:
#line 426 "p4parser.ypp"
        { auto* result = new IR::Vector<IR::Expression>();
          result->push_back(new IR::StringLiteral(yystack_[2].location, yystack_[2].value.as < cstring > ()));
          result->push_back(yystack_[0].value.as < IR::Expression* > ());
          result->srcInfo = yystack_[2].location + yystack_[0].location;
          yylhs.value.as < IR::Node* > () = result; }
#line 4065 "p4parser.tab.cpp"
    break;

  case 20:
#line 439 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::StringLiteral(yystack_[0].location, ""); }
#line 4071 "p4parser.tab.cpp"
    break;

  case 21:
#line 441 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Constant(parseConstantChecked(yystack_[1].location, yystack_[1].value.as < UnparsedConstant > ())); }
#line 4077 "p4parser.tab.cpp"
    break;

  case 22:
#line 444 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Constant(parseConstantChecked(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > ())); }
#line 4083 "p4parser.tab.cpp"
    break;

  case 23:
#line 447 "p4parser.ypp"
                    { YYACCEPT; }
#line 4089 "p4parser.tab.cpp"
    break;

  case 25:
#line 451 "p4parser.ypp"
                         { if (yystack_[0].value.as < IR::Node* > ()) driver.nodes->push_back(yystack_[0].value.as < IR::Node* > ()->getNode()); }
#line 4095 "p4parser.tab.cpp"
    break;

  case 26:
#line 452 "p4parser.ypp"
                         {}
#line 4101 "p4parser.tab.cpp"
    break;

  case 27:
#line 456 "p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 4107 "p4parser.tab.cpp"
    break;

  case 28:
#line 457 "p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Node* > (); }
#line 4113 "p4parser.tab.cpp"
    break;

  case 29:
#line 458 "p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 4119 "p4parser.tab.cpp"
    break;

  case 30:
#line 459 "p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 4125 "p4parser.tab.cpp"
    break;

  case 31:
#line 460 "p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 4131 "p4parser.tab.cpp"
    break;

  case 32:
#line 461 "p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 4137 "p4parser.tab.cpp"
    break;

  case 33:
#line 462 "p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 4143 "p4parser.tab.cpp"
    break;

  case 34:
#line 463 "p4parser.ypp"
                              { driver.onReadErrorDeclaration(yystack_[0].value.as < IR::Type_Error* > ()); yylhs.value.as < IR::Node* > () = nullptr; }
#line 4149 "p4parser.tab.cpp"
    break;

  case 35:
#line 464 "p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Node* > (); }
#line 4155 "p4parser.tab.cpp"
    break;

  case 36:
#line 465 "p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 4161 "p4parser.tab.cpp"
    break;

  case 37:
#line 466 "p4parser.ypp"
                              { yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 4167 "p4parser.tab.cpp"
    break;

  case 38:
#line 467 "p4parser.ypp"
                                {yylhs.value.as < IR::Node* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 4173 "p4parser.tab.cpp"
    break;

  case 39:
#line 471 "p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4179 "p4parser.tab.cpp"
    break;

  case 40:
#line 472 "p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "apply"); }
#line 4185 "p4parser.tab.cpp"
    break;

  case 41:
#line 473 "p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "key"); }
#line 4191 "p4parser.tab.cpp"
    break;

  case 42:
#line 474 "p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "actions"); }
#line 4197 "p4parser.tab.cpp"
    break;

  case 43:
#line 475 "p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "state"); }
#line 4203 "p4parser.tab.cpp"
    break;

  case 44:
#line 476 "p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "entries"); }
#line 4209 "p4parser.tab.cpp"
    break;

  case 45:
#line 477 "p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "type"); }
#line 4215 "p4parser.tab.cpp"
    break;

  case 46:
#line 478 "p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "priority"); }
#line 4221 "p4parser.tab.cpp"
    break;

  case 47:
#line 482 "p4parser.ypp"
                  { yylhs.value.as < IR::ID* > () = yystack_[0].value.as < IR::ID* > (); }
#line 4227 "p4parser.tab.cpp"
    break;

  case 48:
#line 483 "p4parser.ypp"
           { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "list"); }
#line 4233 "p4parser.tab.cpp"
    break;

  case 49:
#line 484 "p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4239 "p4parser.tab.cpp"
    break;

  case 50:
#line 488 "p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4245 "p4parser.tab.cpp"
    break;

  case 51:
#line 489 "p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 4251 "p4parser.tab.cpp"
    break;

  case 52:
#line 490 "p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "apply"); }
#line 4257 "p4parser.tab.cpp"
    break;

  case 53:
#line 491 "p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "state"); }
#line 4263 "p4parser.tab.cpp"
    break;

  case 54:
#line 492 "p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "type"); }
#line 4269 "p4parser.tab.cpp"
    break;

  case 55:
#line 493 "p4parser.ypp"
                       { yylhs.value.as < IR::ID* > () = new IR::ID(yystack_[0].location, "priority"); }
#line 4275 "p4parser.tab.cpp"
    break;

  case 56:
#line 497 "p4parser.ypp"
                  { yylhs.value.as < OptionalConst > () = OptionalConst{false}; }
#line 4281 "p4parser.tab.cpp"
    break;

  case 57:
#line 498 "p4parser.ypp"
                  { yylhs.value.as < OptionalConst > () = OptionalConst{true}; }
#line 4287 "p4parser.tab.cpp"
    break;

  case 58:
#line 502 "p4parser.ypp"
                  { yylhs.value.as < IR::Annotations* > () = IR::Annotations::empty; }
#line 4293 "p4parser.tab.cpp"
    break;

  case 59:
#line 503 "p4parser.ypp"
                  { yylhs.value.as < IR::Annotations* > () = new IR::Annotations(yystack_[0].location, *yystack_[0].value.as < IR::Vector<IR::Annotation>* > ()); }
#line 4299 "p4parser.tab.cpp"
    break;

  case 60:
#line 507 "p4parser.ypp"
                  {
       yylhs.value.as < IR::Vector<IR::Annotation>* > () = new IR::Vector<IR::Annotation>();
       if (! P4CContext::get().options().isAnnotationDisabled(yystack_[0].value.as < IR::Annotation* > ())) {
         yylhs.value.as < IR::Vector<IR::Annotation>* > ()->push_back(yystack_[0].value.as < IR::Annotation* > ());
         yylhs.value.as < IR::Vector<IR::Annotation>* > ()->srcInfo = yystack_[0].location;
       }}
#line 4310 "p4parser.tab.cpp"
    break;

  case 61:
#line 513 "p4parser.ypp"
                             {
       yylhs.value.as < IR::Vector<IR::Annotation>* > () = yystack_[1].value.as < IR::Vector<IR::Annotation>* > ();
       if (! P4CContext::get().options().isAnnotationDisabled(yystack_[0].value.as < IR::Annotation* > ())) {
          yylhs.value.as < IR::Vector<IR::Annotation>* > ()->push_back(yystack_[0].value.as < IR::Annotation* > ());
          yylhs.value.as < IR::Vector<IR::Annotation>* > ()->srcInfo = yystack_[1].location + yystack_[0].location;
       }}
#line 4321 "p4parser.tab.cpp"
    break;

  case 62:
#line 523 "p4parser.ypp"
        { // Initialize with an empty sequence of annotation tokens so that the
          // annotation node is marked as unparsed.
          IR::Vector<IR::AnnotationToken> body;
          yylhs.value.as < IR::Annotation* > () = new IR::Annotation(yystack_[1].location, *yystack_[0].value.as < IR::ID* > (), body); }
#line 4330 "p4parser.tab.cpp"
    break;

  case 63:
#line 528 "p4parser.ypp"
        { yylhs.value.as < IR::Annotation* > () = new IR::Annotation(yystack_[4].location, *yystack_[3].value.as < IR::ID* > (), *yystack_[1].value.as < IR::Vector<IR::AnnotationToken>* > ()); }
#line 4336 "p4parser.tab.cpp"
    break;

  case 64:
#line 530 "p4parser.ypp"
        { yylhs.value.as < IR::Annotation* > () = new IR::Annotation(yystack_[5].location, *yystack_[4].value.as < IR::ID* > (), *yystack_[2].value.as < IR::Vector<IR::Expression>* > (), true); }
#line 4342 "p4parser.tab.cpp"
    break;

  case 65:
#line 532 "p4parser.ypp"
        { yylhs.value.as < IR::Annotation* > () = new IR::Annotation(yystack_[5].location, *yystack_[4].value.as < IR::ID* > (), *yystack_[2].value.as < IR::IndexedVector<IR::NamedExpression>* > (), true); }
#line 4348 "p4parser.tab.cpp"
    break;

  case 66:
#line 536 "p4parser.ypp"
        { yylhs.value.as < IR::Annotation* > () = new IR::Annotation(yystack_[3].location, *yystack_[2].value.as < IR::ID* > (), *yystack_[1].value.as < IR::Vector<IR::AnnotationToken>* > (), false); }
#line 4354 "p4parser.tab.cpp"
    break;

  case 67:
#line 540 "p4parser.ypp"
              { yylhs.value.as < IR::Vector<IR::AnnotationToken>* > () = new IR::Vector<IR::AnnotationToken>; }
#line 4360 "p4parser.tab.cpp"
    break;

  case 68:
#line 542 "p4parser.ypp"
        { yylhs.value.as < IR::Vector<IR::AnnotationToken>* > () = yystack_[3].value.as < IR::Vector<IR::AnnotationToken>* > ();
          yylhs.value.as < IR::Vector<IR::AnnotationToken>* > ()->push_back(new IR::AnnotationToken(yystack_[2].location, yystack_[2].value.as < Token > ().type, yystack_[2].value.as < Token > ().text));
          yylhs.value.as < IR::Vector<IR::AnnotationToken>* > ()->append(*yystack_[1].value.as < IR::Vector<IR::AnnotationToken>* > ());
          yylhs.value.as < IR::Vector<IR::AnnotationToken>* > ()->push_back(new IR::AnnotationToken(yystack_[0].location, yystack_[0].value.as < Token > ().type, yystack_[0].value.as < Token > ().text));
          yylhs.value.as < IR::Vector<IR::AnnotationToken>* > ()->srcInfo = yystack_[3].location + yystack_[0].location;
        }
#line 4371 "p4parser.tab.cpp"
    break;

  case 69:
#line 549 "p4parser.ypp"
        { yylhs.value.as < IR::Vector<IR::AnnotationToken>* > () = yystack_[1].value.as < IR::Vector<IR::AnnotationToken>* > ();
          yylhs.value.as < IR::Vector<IR::AnnotationToken>* > ()->push_back(new IR::AnnotationToken(yystack_[0].location, yystack_[0].value.as < Token > ().type, yystack_[0].value.as < Token > ().text, yystack_[0].value.as < Token > ().unparsedConstant));
          yylhs.value.as < IR::Vector<IR::AnnotationToken>* > ()->srcInfo = yystack_[1].location + yystack_[0].location;
        }
#line 4380 "p4parser.tab.cpp"
    break;

  case 70:
#line 556 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4386 "p4parser.tab.cpp"
    break;

  case 71:
#line 557 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4392 "p4parser.tab.cpp"
    break;

  case 72:
#line 558 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4398 "p4parser.tab.cpp"
    break;

  case 73:
#line 559 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4404 "p4parser.tab.cpp"
    break;

  case 74:
#line 560 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4410 "p4parser.tab.cpp"
    break;

  case 75:
#line 561 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4416 "p4parser.tab.cpp"
    break;

  case 76:
#line 562 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4422 "p4parser.tab.cpp"
    break;

  case 77:
#line 563 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4428 "p4parser.tab.cpp"
    break;

  case 78:
#line 564 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4434 "p4parser.tab.cpp"
    break;

  case 79:
#line 565 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4440 "p4parser.tab.cpp"
    break;

  case 80:
#line 566 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4446 "p4parser.tab.cpp"
    break;

  case 81:
#line 567 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4452 "p4parser.tab.cpp"
    break;

  case 82:
#line 568 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4458 "p4parser.tab.cpp"
    break;

  case 83:
#line 569 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4464 "p4parser.tab.cpp"
    break;

  case 84:
#line 570 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4470 "p4parser.tab.cpp"
    break;

  case 85:
#line 571 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4476 "p4parser.tab.cpp"
    break;

  case 86:
#line 572 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4482 "p4parser.tab.cpp"
    break;

  case 87:
#line 573 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4488 "p4parser.tab.cpp"
    break;

  case 88:
#line 574 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4494 "p4parser.tab.cpp"
    break;

  case 89:
#line 575 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4500 "p4parser.tab.cpp"
    break;

  case 90:
#line 576 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4506 "p4parser.tab.cpp"
    break;

  case 91:
#line 577 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4512 "p4parser.tab.cpp"
    break;

  case 92:
#line 578 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4518 "p4parser.tab.cpp"
    break;

  case 93:
#line 579 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4524 "p4parser.tab.cpp"
    break;

  case 94:
#line 580 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4530 "p4parser.tab.cpp"
    break;

  case 95:
#line 581 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4536 "p4parser.tab.cpp"
    break;

  case 96:
#line 582 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4542 "p4parser.tab.cpp"
    break;

  case 97:
#line 583 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4548 "p4parser.tab.cpp"
    break;

  case 98:
#line 584 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4554 "p4parser.tab.cpp"
    break;

  case 99:
#line 585 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4560 "p4parser.tab.cpp"
    break;

  case 100:
#line 586 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4566 "p4parser.tab.cpp"
    break;

  case 101:
#line 587 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4572 "p4parser.tab.cpp"
    break;

  case 102:
#line 588 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4578 "p4parser.tab.cpp"
    break;

  case 103:
#line 589 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4584 "p4parser.tab.cpp"
    break;

  case 104:
#line 590 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4590 "p4parser.tab.cpp"
    break;

  case 105:
#line 591 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4596 "p4parser.tab.cpp"
    break;

  case 106:
#line 592 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4602 "p4parser.tab.cpp"
    break;

  case 107:
#line 593 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4608 "p4parser.tab.cpp"
    break;

  case 108:
#line 594 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4614 "p4parser.tab.cpp"
    break;

  case 109:
#line 595 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4620 "p4parser.tab.cpp"
    break;

  case 110:
#line 596 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4626 "p4parser.tab.cpp"
    break;

  case 111:
#line 597 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4632 "p4parser.tab.cpp"
    break;

  case 112:
#line 598 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4638 "p4parser.tab.cpp"
    break;

  case 113:
#line 599 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4644 "p4parser.tab.cpp"
    break;

  case 114:
#line 600 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4650 "p4parser.tab.cpp"
    break;

  case 115:
#line 601 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4656 "p4parser.tab.cpp"
    break;

  case 116:
#line 602 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4662 "p4parser.tab.cpp"
    break;

  case 117:
#line 604 "p4parser.ypp"
                       { yylhs.value.as < Token > () = Token(token::TOK_IDENTIFIER, yystack_[0].value.as < cstring > ()); }
#line 4668 "p4parser.tab.cpp"
    break;

  case 118:
#line 605 "p4parser.ypp"
                       { yylhs.value.as < Token > () = Token(token::TOK_TYPE_IDENTIFIER, yystack_[0].value.as < cstring > ()); }
#line 4674 "p4parser.tab.cpp"
    break;

  case 119:
#line 606 "p4parser.ypp"
                       { yylhs.value.as < Token > () = Token(token::TOK_STRING_LITERAL, yystack_[0].value.as < cstring > ()); }
#line 4680 "p4parser.tab.cpp"
    break;

  case 120:
#line 607 "p4parser.ypp"
                       { yylhs.value.as < Token > () = Token(token::TOK_INTEGER, yystack_[0].value.as < UnparsedConstant > ()); }
#line 4686 "p4parser.tab.cpp"
    break;

  case 121:
#line 609 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4692 "p4parser.tab.cpp"
    break;

  case 122:
#line 610 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4698 "p4parser.tab.cpp"
    break;

  case 123:
#line 611 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4704 "p4parser.tab.cpp"
    break;

  case 124:
#line 612 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4710 "p4parser.tab.cpp"
    break;

  case 125:
#line 613 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4716 "p4parser.tab.cpp"
    break;

  case 126:
#line 614 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4722 "p4parser.tab.cpp"
    break;

  case 127:
#line 615 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4728 "p4parser.tab.cpp"
    break;

  case 128:
#line 616 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4734 "p4parser.tab.cpp"
    break;

  case 129:
#line 617 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4740 "p4parser.tab.cpp"
    break;

  case 130:
#line 618 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4746 "p4parser.tab.cpp"
    break;

  case 131:
#line 620 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4752 "p4parser.tab.cpp"
    break;

  case 132:
#line 621 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4758 "p4parser.tab.cpp"
    break;

  case 133:
#line 622 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4764 "p4parser.tab.cpp"
    break;

  case 134:
#line 623 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4770 "p4parser.tab.cpp"
    break;

  case 135:
#line 624 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4776 "p4parser.tab.cpp"
    break;

  case 136:
#line 625 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4782 "p4parser.tab.cpp"
    break;

  case 137:
#line 626 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4788 "p4parser.tab.cpp"
    break;

  case 138:
#line 628 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4794 "p4parser.tab.cpp"
    break;

  case 139:
#line 629 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4800 "p4parser.tab.cpp"
    break;

  case 140:
#line 630 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4806 "p4parser.tab.cpp"
    break;

  case 141:
#line 631 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4812 "p4parser.tab.cpp"
    break;

  case 142:
#line 638 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4818 "p4parser.tab.cpp"
    break;

  case 143:
#line 639 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4824 "p4parser.tab.cpp"
    break;

  case 144:
#line 640 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4830 "p4parser.tab.cpp"
    break;

  case 145:
#line 641 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4836 "p4parser.tab.cpp"
    break;

  case 146:
#line 642 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4842 "p4parser.tab.cpp"
    break;

  case 147:
#line 643 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4848 "p4parser.tab.cpp"
    break;

  case 148:
#line 644 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4854 "p4parser.tab.cpp"
    break;

  case 149:
#line 645 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4860 "p4parser.tab.cpp"
    break;

  case 150:
#line 647 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4866 "p4parser.tab.cpp"
    break;

  case 151:
#line 648 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4872 "p4parser.tab.cpp"
    break;

  case 152:
#line 649 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4878 "p4parser.tab.cpp"
    break;

  case 153:
#line 650 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4884 "p4parser.tab.cpp"
    break;

  case 154:
#line 651 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4890 "p4parser.tab.cpp"
    break;

  case 155:
#line 652 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4896 "p4parser.tab.cpp"
    break;

  case 156:
#line 653 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4902 "p4parser.tab.cpp"
    break;

  case 157:
#line 654 "p4parser.ypp"
                       { yylhs.value.as < Token > () = yystack_[0].value.as < Token > (); }
#line 4908 "p4parser.tab.cpp"
    break;

  case 158:
#line 658 "p4parser.ypp"
                        { yylhs.value.as < IR::IndexedVector<IR::NamedExpression>* > () = new IR::IndexedVector<IR::NamedExpression>; yylhs.value.as < IR::IndexedVector<IR::NamedExpression>* > ()->push_back(yystack_[0].value.as < IR::NamedExpression* > ()); yylhs.value.as < IR::IndexedVector<IR::NamedExpression>* > ()->srcInfo = yystack_[0].location; }
#line 4914 "p4parser.tab.cpp"
    break;

  case 159:
#line 659 "p4parser.ypp"
                        { yylhs.value.as < IR::IndexedVector<IR::NamedExpression>* > () = yystack_[2].value.as < IR::IndexedVector<IR::NamedExpression>* > (); yylhs.value.as < IR::IndexedVector<IR::NamedExpression>* > ()->push_back(yystack_[0].value.as < IR::NamedExpression* > ()); yylhs.value.as < IR::IndexedVector<IR::NamedExpression>* > ()->srcInfo = yystack_[2].location + yystack_[0].location;}
#line 4920 "p4parser.tab.cpp"
    break;

  case 160:
#line 663 "p4parser.ypp"
                                       { yylhs.value.as < IR::NamedExpression* > () = new IR::NamedExpression(yystack_[2].location, *yystack_[2].value.as < IR::ID* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4926 "p4parser.tab.cpp"
    break;

  case 161:
#line 667 "p4parser.ypp"
                                      { yylhs.value.as < IR::IndexedVector<IR::Parameter>* > () = new IR::IndexedVector<IR::Parameter>(); }
#line 4932 "p4parser.tab.cpp"
    break;

  case 162:
#line 668 "p4parser.ypp"
                                      { yylhs.value.as < IR::IndexedVector<IR::Parameter>* > () = yystack_[0].value.as < IR::IndexedVector<IR::Parameter>* > (); }
#line 4938 "p4parser.tab.cpp"
    break;

  case 163:
#line 672 "p4parser.ypp"
                                          { yylhs.value.as < IR::IndexedVector<IR::Parameter>* > () = new IR::IndexedVector<IR::Parameter>();
                                            yylhs.value.as < IR::IndexedVector<IR::Parameter>* > ()->push_back(yystack_[0].value.as < IR::Parameter* > ()); yylhs.value.as < IR::IndexedVector<IR::Parameter>* > ()->srcInfo = yystack_[0].location; }
#line 4945 "p4parser.tab.cpp"
    break;

  case 164:
#line 674 "p4parser.ypp"
                                          { yylhs.value.as < IR::IndexedVector<IR::Parameter>* > () = yystack_[2].value.as < IR::IndexedVector<IR::Parameter>* > (); yylhs.value.as < IR::IndexedVector<IR::Parameter>* > ()->push_back(yystack_[0].value.as < IR::Parameter* > ()); yylhs.value.as < IR::IndexedVector<IR::Parameter>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 4951 "p4parser.tab.cpp"
    break;

  case 165:
#line 678 "p4parser.ypp"
                                            { yylhs.value.as < IR::Parameter* > () = new IR::Parameter(yystack_[0].location, *yystack_[0].value.as < IR::ID* > (), yystack_[3].value.as < IR::Annotations* > (), yystack_[2].value.as < IR::Direction > (), yystack_[1].value.as < ConstType* > (), nullptr); }
#line 4957 "p4parser.tab.cpp"
    break;

  case 166:
#line 679 "p4parser.ypp"
                                                           { yylhs.value.as < IR::Parameter* > () = new IR::Parameter(yystack_[2].location, *yystack_[2].value.as < IR::ID* > (), yystack_[5].value.as < IR::Annotations* > (), yystack_[4].value.as < IR::Direction > (), yystack_[3].value.as < ConstType* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 4963 "p4parser.tab.cpp"
    break;

  case 167:
#line 683 "p4parser.ypp"
                   { yylhs.value.as < IR::Direction > () = IR::Direction::In; }
#line 4969 "p4parser.tab.cpp"
    break;

  case 168:
#line 684 "p4parser.ypp"
                   { yylhs.value.as < IR::Direction > () = IR::Direction::Out; }
#line 4975 "p4parser.tab.cpp"
    break;

  case 169:
#line 685 "p4parser.ypp"
                   { yylhs.value.as < IR::Direction > () = IR::Direction::InOut; }
#line 4981 "p4parser.tab.cpp"
    break;

  case 170:
#line 686 "p4parser.ypp"
                   { yylhs.value.as < IR::Direction > () = IR::Direction::None; }
#line 4987 "p4parser.tab.cpp"
    break;

  case 171:
#line 690 "p4parser.ypp"
                                  { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), false); }
#line 4993 "p4parser.tab.cpp"
    break;

  case 172:
#line 691 "p4parser.ypp"
                        {
          if (!yystack_[0].value.as < IR::TypeParameters* > ()->empty()) driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
          driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 5001 "p4parser.tab.cpp"
    break;

  case 173:
#line 694 "p4parser.ypp"
                                   {
          driver.structure->declareParameters(yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
          auto pl = new IR::ParameterList(yystack_[1].location, *yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
          yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Package(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), yystack_[8].value.as < IR::Annotations* > (), yystack_[4].value.as < IR::TypeParameters* > (), pl); }
#line 5010 "p4parser.tab.cpp"
    break;

  case 174:
#line 702 "p4parser.ypp"
                     { yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Instance(yystack_[1].location, *yystack_[1].value.as < IR::ID* > (), new IR::Annotations(*yystack_[6].value.as < IR::Vector<IR::Annotation>* > ()),
                                                         yystack_[5].value.as < ConstType* > (), yystack_[3].value.as < IR::Vector<IR::Argument>* > ());
                       driver.structure->declareObject(*yystack_[1].value.as < IR::ID* > (), yystack_[5].value.as < ConstType* > ()->toString()); }
#line 5018 "p4parser.tab.cpp"
    break;

  case 175:
#line 706 "p4parser.ypp"
                     { yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Instance(yystack_[1].location, *yystack_[1].value.as < IR::ID* > (), yystack_[5].value.as < ConstType* > (), yystack_[3].value.as < IR::Vector<IR::Argument>* > ());
                       driver.structure->declareObject(*yystack_[1].value.as < IR::ID* > (), yystack_[5].value.as < ConstType* > ()->toString()); }
#line 5025 "p4parser.tab.cpp"
    break;

  case 176:
#line 709 "p4parser.ypp"
                     { yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Instance(yystack_[3].location, *yystack_[3].value.as < IR::ID* > (), new IR::Annotations(*yystack_[8].value.as < IR::Vector<IR::Annotation>* > ()),
                                                         yystack_[7].value.as < ConstType* > (), yystack_[5].value.as < IR::Vector<IR::Argument>* > (), yystack_[1].value.as < IR::BlockStatement* > ());
                       driver.structure->declareObject(*yystack_[3].value.as < IR::ID* > (), yystack_[7].value.as < ConstType* > ()->toString()); }
#line 5033 "p4parser.tab.cpp"
    break;

  case 177:
#line 713 "p4parser.ypp"
                     { yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Instance(yystack_[3].location, *yystack_[3].value.as < IR::ID* > (), yystack_[7].value.as < ConstType* > (), yystack_[5].value.as < IR::Vector<IR::Argument>* > (), yystack_[1].value.as < IR::BlockStatement* > ());
                       driver.structure->declareObject(*yystack_[3].value.as < IR::ID* > (), yystack_[7].value.as < ConstType* > ()->toString()); }
#line 5040 "p4parser.tab.cpp"
    break;

  case 178:
#line 718 "p4parser.ypp"
          { driver.structure->pushNamespace(yystack_[0].location, false); }
#line 5046 "p4parser.tab.cpp"
    break;

  case 179:
#line 719 "p4parser.ypp"
                               { driver.structure->pop();
                                 yylhs.value.as < IR::BlockStatement* > () = new IR::BlockStatement(yystack_[3].location+yystack_[0].location, *yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > ()); }
#line 5053 "p4parser.tab.cpp"
    break;

  case 180:
#line 724 "p4parser.ypp"
                                     { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = new IR::IndexedVector<IR::StatOrDecl>(); }
#line 5059 "p4parser.tab.cpp"
    break;

  case 181:
#line 725 "p4parser.ypp"
                                     { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > (); yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > ()->push_back(yystack_[0].value.as < IR::Declaration* > ()); yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > ()->srcInfo = yystack_[1].location + yystack_[0].location;}
#line 5065 "p4parser.tab.cpp"
    break;

  case 182:
#line 729 "p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5071 "p4parser.tab.cpp"
    break;

  case 183:
#line 730 "p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5077 "p4parser.tab.cpp"
    break;

  case 184:
#line 734 "p4parser.ypp"
                             { yylhs.value.as < IR::IndexedVector<IR::Parameter>* > () = new IR::IndexedVector<IR::Parameter>(); }
#line 5083 "p4parser.tab.cpp"
    break;

  case 185:
#line 735 "p4parser.ypp"
                             { yylhs.value.as < IR::IndexedVector<IR::Parameter>* > () = yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > (); }
#line 5089 "p4parser.tab.cpp"
    break;

  case 186:
#line 739 "p4parser.ypp"
                               { driver.structure->startAbsolutePath(); }
#line 5095 "p4parser.tab.cpp"
    break;

  case 187:
#line 747 "p4parser.ypp"
                             { driver.structure->pop();
                               auto pl = new IR::ParameterList(yystack_[4].location, *yystack_[4].value.as < IR::IndexedVector<IR::Parameter>* > ());
                               yylhs.value.as < IR::Type_Declaration* > () = new IR::P4Parser(yystack_[5].value.as < IR::Type_Parser* > ()->name.srcInfo, yystack_[5].value.as < IR::Type_Parser* > ()->name,
                                                     yystack_[5].value.as < IR::Type_Parser* > (), pl, *yystack_[2].value.as < IR::IndexedVector<IR::Declaration>* > (), *yystack_[1].value.as < IR::IndexedVector<IR::ParserState>* > ());}
#line 5104 "p4parser.tab.cpp"
    break;

  case 188:
#line 754 "p4parser.ypp"
                                             { yylhs.value.as < IR::IndexedVector<IR::Declaration>* > () = new IR::IndexedVector<IR::Declaration>(); }
#line 5110 "p4parser.tab.cpp"
    break;

  case 189:
#line 755 "p4parser.ypp"
                                             { yylhs.value.as < IR::IndexedVector<IR::Declaration>* > () = yystack_[1].value.as < IR::IndexedVector<IR::Declaration>* > (); yylhs.value.as < IR::IndexedVector<IR::Declaration>* > ()->push_back(yystack_[0].value.as < IR::Declaration* > ()); yylhs.value.as < IR::IndexedVector<IR::Declaration>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 5116 "p4parser.tab.cpp"
    break;

  case 190:
#line 759 "p4parser.ypp"
                                      { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5122 "p4parser.tab.cpp"
    break;

  case 191:
#line 760 "p4parser.ypp"
                                      { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5128 "p4parser.tab.cpp"
    break;

  case 192:
#line 761 "p4parser.ypp"
                                      { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5134 "p4parser.tab.cpp"
    break;

  case 193:
#line 762 "p4parser.ypp"
                                      { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5140 "p4parser.tab.cpp"
    break;

  case 194:
#line 767 "p4parser.ypp"
                          { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), true); }
#line 5146 "p4parser.tab.cpp"
    break;

  case 195:
#line 768 "p4parser.ypp"
                          { if (!yystack_[0].value.as < IR::TypeParameters* > ()->empty()) driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
                            driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 5153 "p4parser.tab.cpp"
    break;

  case 196:
#line 770 "p4parser.ypp"
                              { driver.structure->declareParameters(yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                auto pl = new IR::ParameterList(yystack_[1].location, *yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                yylhs.value.as < IR::Type_Parser* > () = new IR::Type_Parser(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), yystack_[8].value.as < IR::Annotations* > (), yystack_[4].value.as < IR::TypeParameters* > (), pl); }
#line 5161 "p4parser.tab.cpp"
    break;

  case 197:
#line 776 "p4parser.ypp"
                                      { yylhs.value.as < IR::IndexedVector<IR::ParserState>* > () = new IR::IndexedVector<IR::ParserState>();
                                        yylhs.value.as < IR::IndexedVector<IR::ParserState>* > ()->push_back(yystack_[0].value.as < IR::ParserState* > ()); yylhs.value.as < IR::IndexedVector<IR::ParserState>* > ()->srcInfo = yystack_[0].location; }
#line 5168 "p4parser.tab.cpp"
    break;

  case 198:
#line 778 "p4parser.ypp"
                                      { yylhs.value.as < IR::IndexedVector<IR::ParserState>* > () = yystack_[1].value.as < IR::IndexedVector<IR::ParserState>* > (); yylhs.value.as < IR::IndexedVector<IR::ParserState>* > ()->push_back(yystack_[0].value.as < IR::ParserState* > ()); yylhs.value.as < IR::IndexedVector<IR::ParserState>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 5174 "p4parser.tab.cpp"
    break;

  case 199:
#line 782 "p4parser.ypp"
                                { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), false); }
#line 5180 "p4parser.tab.cpp"
    break;

  case 200:
#line 784 "p4parser.ypp"
                                      { driver.structure->pop();
                                        yylhs.value.as < IR::ParserState* > () = new IR::ParserState(yystack_[5].location, *yystack_[5].value.as < IR::ID* > (), yystack_[7].value.as < IR::Annotations* > (), *yystack_[2].value.as < IR::IndexedVector<IR::StatOrDecl>* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 5187 "p4parser.tab.cpp"
    break;

  case 201:
#line 789 "p4parser.ypp"
                                       { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = new IR::IndexedVector<IR::StatOrDecl>(); }
#line 5193 "p4parser.tab.cpp"
    break;

  case 202:
#line 790 "p4parser.ypp"
                                       { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > (); yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > ()->push_back(yystack_[0].value.as < IR::StatOrDecl* > ()); yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 5199 "p4parser.tab.cpp"
    break;

  case 203:
#line 794 "p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 5205 "p4parser.tab.cpp"
    break;

  case 204:
#line 795 "p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 5211 "p4parser.tab.cpp"
    break;

  case 205:
#line 796 "p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 5217 "p4parser.tab.cpp"
    break;

  case 206:
#line 797 "p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5223 "p4parser.tab.cpp"
    break;

  case 207:
#line 798 "p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5229 "p4parser.tab.cpp"
    break;

  case 208:
#line 799 "p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::BlockStatement* > (); }
#line 5235 "p4parser.tab.cpp"
    break;

  case 209:
#line 800 "p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 5241 "p4parser.tab.cpp"
    break;

  case 210:
#line 801 "p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 5247 "p4parser.tab.cpp"
    break;

  case 211:
#line 802 "p4parser.ypp"
                                      { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 5253 "p4parser.tab.cpp"
    break;

  case 212:
#line 806 "p4parser.ypp"
                         { driver.structure->pushNamespace(yystack_[0].location, false); }
#line 5259 "p4parser.tab.cpp"
    break;

  case 213:
#line 807 "p4parser.ypp"
                           { driver.structure->pop(); yylhs.value.as < IR::BlockStatement* > () = new IR::BlockStatement(yystack_[4].location+yystack_[0].location, yystack_[4].value.as < IR::Annotations* > (), *yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > ()); }
#line 5265 "p4parser.tab.cpp"
    break;

  case 214:
#line 811 "p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = nullptr; }
#line 5271 "p4parser.tab.cpp"
    break;

  case 215:
#line 812 "p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 5277 "p4parser.tab.cpp"
    break;

  case 216:
#line 816 "p4parser.ypp"
                       { yylhs.value.as < IR::Expression* > () = new IR::PathExpression(*yystack_[1].value.as < IR::ID* > ()); }
#line 5283 "p4parser.tab.cpp"
    break;

  case 217:
#line 817 "p4parser.ypp"
                       { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 5289 "p4parser.tab.cpp"
    break;

  case 218:
#line 822 "p4parser.ypp"
                              { yylhs.value.as < IR::Expression* > () = new IR::SelectExpression(yystack_[6].location + yystack_[0].location,
                                     new IR::ListExpression(yystack_[4].location, *yystack_[4].value.as < IR::Vector<IR::Expression>* > ()), std::move(*yystack_[1].value.as < IR::Vector<IR::SelectCase>* > ())); }
#line 5296 "p4parser.tab.cpp"
    break;

  case 219:
#line 827 "p4parser.ypp"
                                 { yylhs.value.as < IR::Vector<IR::SelectCase>* > () = new IR::Vector<IR::SelectCase>(); }
#line 5302 "p4parser.tab.cpp"
    break;

  case 220:
#line 828 "p4parser.ypp"
                                 { yylhs.value.as < IR::Vector<IR::SelectCase>* > () = yystack_[1].value.as < IR::Vector<IR::SelectCase>* > (); yylhs.value.as < IR::Vector<IR::SelectCase>* > ()->push_back(yystack_[0].value.as < IR::SelectCase* > ()); yylhs.value.as < IR::Vector<IR::SelectCase>* > ()->srcInfo = yystack_[1].location + yystack_[0].location;}
#line 5308 "p4parser.tab.cpp"
    break;

  case 221:
#line 833 "p4parser.ypp"
      { auto expr = new IR::PathExpression(*yystack_[1].value.as < IR::ID* > ());
        yylhs.value.as < IR::SelectCase* > () = new IR::SelectCase(yystack_[3].location + yystack_[1].location, yystack_[3].value.as < IR::Expression* > (), expr); }
#line 5315 "p4parser.tab.cpp"
    break;

  case 222:
#line 838 "p4parser.ypp"
                                { yylhs.value.as < IR::Expression* > () = new IR::ListExpression(yystack_[0].location, *yystack_[0].value.as < IR::Vector<IR::Expression>* > ()); }
#line 5321 "p4parser.tab.cpp"
    break;

  case 223:
#line 839 "p4parser.ypp"
                                { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 5327 "p4parser.tab.cpp"
    break;

  case 224:
#line 844 "p4parser.ypp"
                                            { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[1].value.as < IR::Vector<IR::Expression>* > (); yystack_[1].value.as < IR::Vector<IR::Expression>* > ()->insert(yystack_[1].value.as < IR::Vector<IR::Expression>* > ()->begin(), yystack_[3].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[3].location + yystack_[1].location; }
#line 5333 "p4parser.tab.cpp"
    break;

  case 225:
#line 845 "p4parser.ypp"
                                            { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>(); yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[1].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[1].location; }
#line 5339 "p4parser.tab.cpp"
    break;

  case 228:
#line 854 "p4parser.ypp"
                             { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>(); yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[0].location; }
#line 5345 "p4parser.tab.cpp"
    break;

  case 229:
#line 855 "p4parser.ypp"
                                                      { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[2].value.as < IR::Vector<IR::Expression>* > (); yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 5351 "p4parser.tab.cpp"
    break;

  case 230:
#line 860 "p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::Mask(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 5357 "p4parser.tab.cpp"
    break;

  case 231:
#line 861 "p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::Range(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 5363 "p4parser.tab.cpp"
    break;

  case 232:
#line 862 "p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::DefaultExpression(yystack_[0].location); }
#line 5369 "p4parser.tab.cpp"
    break;

  case 233:
#line 863 "p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::DefaultExpression(yystack_[0].location); }
#line 5375 "p4parser.tab.cpp"
    break;

  case 234:
#line 867 "p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 5381 "p4parser.tab.cpp"
    break;

  case 235:
#line 868 "p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::Mask(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 5387 "p4parser.tab.cpp"
    break;

  case 236:
#line 869 "p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::Range(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 5393 "p4parser.tab.cpp"
    break;

  case 237:
#line 870 "p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::DefaultExpression(yystack_[0].location); }
#line 5399 "p4parser.tab.cpp"
    break;

  case 238:
#line 871 "p4parser.ypp"
                                  { yylhs.value.as < IR::Expression* > () = new IR::DefaultExpression(yystack_[0].location); }
#line 5405 "p4parser.tab.cpp"
    break;

  case 239:
#line 877 "p4parser.ypp"
        { yylhs.value.as < IR::Declaration* > () = new IR::P4ValueSet(yystack_[1].location, *yystack_[1].value.as < IR::ID* > (), yystack_[9].value.as < IR::Annotations* > (), yystack_[6].value.as < ConstType* > (), yystack_[3].value.as < IR::Expression* > ()); }
#line 5411 "p4parser.tab.cpp"
    break;

  case 240:
#line 880 "p4parser.ypp"
        { yylhs.value.as < IR::Declaration* > () = new IR::P4ValueSet(yystack_[1].location, *yystack_[1].value.as < IR::ID* > (), yystack_[9].value.as < IR::Annotations* > (), yystack_[6].value.as < ConstType* > (), yystack_[3].value.as < IR::Expression* > ()); }
#line 5417 "p4parser.tab.cpp"
    break;

  case 241:
#line 883 "p4parser.ypp"
        { yylhs.value.as < IR::Declaration* > () = new IR::P4ValueSet(yystack_[1].location, *yystack_[1].value.as < IR::ID* > (), yystack_[9].value.as < IR::Annotations* > (), yystack_[6].value.as < IR::Type_Name* > (), yystack_[3].value.as < IR::Expression* > ()); }
#line 5423 "p4parser.tab.cpp"
    break;

  case 242:
#line 891 "p4parser.ypp"
        { driver.structure->pop();
          auto pl = new IR::ParameterList(yystack_[5].location, *yystack_[5].value.as < IR::IndexedVector<IR::Parameter>* > ());
          yylhs.value.as < IR::Type_Declaration* > () = new IR::P4Control(yystack_[6].value.as < IR::Type_Control* > ()->name.srcInfo, yystack_[6].value.as < IR::Type_Control* > ()->name, yystack_[6].value.as < IR::Type_Control* > (), pl, *yystack_[3].value.as < IR::IndexedVector<IR::Declaration>* > (), yystack_[1].value.as < IR::BlockStatement* > ()); }
#line 5431 "p4parser.tab.cpp"
    break;

  case 243:
#line 898 "p4parser.ypp"
                     { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), true); }
#line 5437 "p4parser.tab.cpp"
    break;

  case 244:
#line 899 "p4parser.ypp"
                          { if (!yystack_[0].value.as < IR::TypeParameters* > ()->empty()) driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
                            driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 5444 "p4parser.tab.cpp"
    break;

  case 245:
#line 901 "p4parser.ypp"
                              { driver.structure->declareParameters(yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                auto pl = new IR::ParameterList(yystack_[1].location, *yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                yylhs.value.as < IR::Type_Control* > () = new IR::Type_Control(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), yystack_[8].value.as < IR::Annotations* > (), yystack_[4].value.as < IR::TypeParameters* > (), pl); }
#line 5452 "p4parser.tab.cpp"
    break;

  case 246:
#line 907 "p4parser.ypp"
             { yylhs.value.as < IR::IndexedVector<IR::Declaration>* > () = new IR::IndexedVector<IR::Declaration>(); }
#line 5458 "p4parser.tab.cpp"
    break;

  case 247:
#line 908 "p4parser.ypp"
                                                       { yylhs.value.as < IR::IndexedVector<IR::Declaration>* > () = yystack_[1].value.as < IR::IndexedVector<IR::Declaration>* > (); yylhs.value.as < IR::IndexedVector<IR::Declaration>* > ()->push_back(yystack_[0].value.as < IR::Declaration* > ()); yylhs.value.as < IR::IndexedVector<IR::Declaration>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 5464 "p4parser.tab.cpp"
    break;

  case 248:
#line 912 "p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5470 "p4parser.tab.cpp"
    break;

  case 249:
#line 913 "p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5476 "p4parser.tab.cpp"
    break;

  case 250:
#line 914 "p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5482 "p4parser.tab.cpp"
    break;

  case 251:
#line 915 "p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5488 "p4parser.tab.cpp"
    break;

  case 252:
#line 916 "p4parser.ypp"
                               { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5494 "p4parser.tab.cpp"
    break;

  case 253:
#line 917 "p4parser.ypp"
                                { yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5500 "p4parser.tab.cpp"
    break;

  case 254:
#line 918 "p4parser.ypp"
                                 {yylhs.value.as < IR::Declaration* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 5506 "p4parser.tab.cpp"
    break;

  case 255:
#line 922 "p4parser.ypp"
                     { yylhs.value.as < IR::BlockStatement* > () = yystack_[0].value.as < IR::BlockStatement* > (); }
#line 5512 "p4parser.tab.cpp"
    break;

  case 256:
#line 929 "p4parser.ypp"
                           { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), true); }
#line 5518 "p4parser.tab.cpp"
    break;

  case 257:
#line 930 "p4parser.ypp"
                          { if (!yystack_[0].value.as < IR::TypeParameters* > ()->empty()) driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
                            driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 5525 "p4parser.tab.cpp"
    break;

  case 258:
#line 932 "p4parser.ypp"
                                 { driver.structure->pop();
                                   yylhs.value.as < IR::Node* > () = new IR::Type_Extern(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), yystack_[4].value.as < IR::TypeParameters* > (), *yystack_[1].value.as < IR::Vector<IR::Method>* > (), yystack_[8].value.as < IR::Annotations* > ()); }
#line 5532 "p4parser.tab.cpp"
    break;

  case 259:
#line 934 "p4parser.ypp"
                                                  {
            driver.structure->pop();
            yylhs.value.as < IR::Node* > () = yystack_[1].value.as < IR::Method* > ();
            yystack_[1].value.as < IR::Method* > ()->annotations = yystack_[3].value.as < IR::Annotations* > (); }
#line 5541 "p4parser.tab.cpp"
    break;

  case 260:
#line 938 "p4parser.ypp"
                                     {
            // forward declaration;
            driver.structure->pushContainerType(*yystack_[1].value.as < IR::ID* > (), true);
            driver.structure->pop();
            yylhs.value.as < IR::Node* > () = nullptr; }
#line 5551 "p4parser.tab.cpp"
    break;

  case 261:
#line 946 "p4parser.ypp"
                                       { yylhs.value.as < IR::Vector<IR::Method>* > () = new IR::Vector<IR::Method>(); }
#line 5557 "p4parser.tab.cpp"
    break;

  case 262:
#line 947 "p4parser.ypp"
                                       { yylhs.value.as < IR::Vector<IR::Method>* > () = yystack_[1].value.as < IR::Vector<IR::Method>* > (); yystack_[1].value.as < IR::Vector<IR::Method>* > ()->push_back(yystack_[0].value.as < IR::Method* > ()); yylhs.value.as < IR::Vector<IR::Method>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 5563 "p4parser.tab.cpp"
    break;

  case 263:
#line 952 "p4parser.ypp"
                               {
            driver.structure->declareObject(*yystack_[1].value.as < IR::ID* > (), yystack_[2].value.as < ConstType* > ()->toString());
            if (!yystack_[0].value.as < IR::TypeParameters* > ()->empty()) driver.structure->markAsTemplate(*yystack_[1].value.as < IR::ID* > ());
            driver.structure->pushNamespace(yystack_[1].location, false);
            driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 5573 "p4parser.tab.cpp"
    break;

  case 264:
#line 957 "p4parser.ypp"
                              { driver.structure->declareParameters(yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                auto params = new IR::ParameterList(yystack_[1].location, *yystack_[1].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                auto mt = new IR::Type_Method(yystack_[5].location, yystack_[4].value.as < IR::TypeParameters* > (), yystack_[6].value.as < ConstType* > (), params, *yystack_[5].value.as < IR::ID* > ());
                                yylhs.value.as < IR::Method* > () = new IR::Method(yystack_[5].location, *yystack_[5].value.as < IR::ID* > (), mt); }
#line 5582 "p4parser.tab.cpp"
    break;

  case 265:
#line 964 "p4parser.ypp"
                                           {
            driver.structure->pop();
            yylhs.value.as < IR::Method* > () = yystack_[1].value.as < IR::Method* > (); yystack_[1].value.as < IR::Method* > ()->annotations = yystack_[2].value.as < IR::Annotations* > (); }
#line 5590 "p4parser.tab.cpp"
    break;

  case 266:
#line 967 "p4parser.ypp"
                                                    {
            driver.structure->pop();
            yylhs.value.as < IR::Method* > () = yystack_[1].value.as < IR::Method* > (); yylhs.value.as < IR::Method* > ()->setAbstract();
            yystack_[1].value.as < IR::Method* > ()->annotations = yystack_[3].value.as < IR::Annotations* > (); }
#line 5599 "p4parser.tab.cpp"
    break;

  case 267:
#line 972 "p4parser.ypp"
                                        { auto par = new IR::ParameterList(yystack_[2].location, *yystack_[2].value.as < IR::IndexedVector<IR::Parameter>* > ());
                                          auto mt = new IR::Type_Method(yystack_[4].location, par, yystack_[4].value.as < cstring > ());
                                          yylhs.value.as < IR::Method* > () = new IR::Method(yystack_[4].location, IR::ID(yystack_[4].location, yystack_[4].value.as < cstring > ()), mt, yystack_[5].value.as < IR::Annotations* > ()); }
#line 5607 "p4parser.tab.cpp"
    break;

  case 268:
#line 980 "p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 5613 "p4parser.tab.cpp"
    break;

  case 269:
#line 981 "p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < IR::Type_Name* > (); }
#line 5619 "p4parser.tab.cpp"
    break;

  case 270:
#line 982 "p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 5625 "p4parser.tab.cpp"
    break;

  case 271:
#line 983 "p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 5631 "p4parser.tab.cpp"
    break;

  case 272:
#line 984 "p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 5637 "p4parser.tab.cpp"
    break;

  case 273:
#line 985 "p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 5643 "p4parser.tab.cpp"
    break;

  case 274:
#line 989 "p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < IR::Type_Name* > (); }
#line 5649 "p4parser.tab.cpp"
    break;

  case 275:
#line 990 "p4parser.ypp"
                                       { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 5655 "p4parser.tab.cpp"
    break;

  case 276:
#line 994 "p4parser.ypp"
                                       { yylhs.value.as < IR::Path* > () = new IR::Path(IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ())); }
#line 5661 "p4parser.tab.cpp"
    break;

  case 277:
#line 995 "p4parser.ypp"
                                       { yylhs.value.as < IR::Path* > () = new IR::Path(IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ()), true);
                                         driver.structure->clearPath(); }
#line 5668 "p4parser.tab.cpp"
    break;

  case 278:
#line 1000 "p4parser.ypp"
                                       { yylhs.value.as < IR::Type_Name* > () = new IR::Type_Name(yystack_[0].location, yystack_[0].value.as < IR::Path* > ()); }
#line 5674 "p4parser.tab.cpp"
    break;

  case 279:
#line 1004 "p4parser.ypp"
                                     { yylhs.value.as < ConstType* > () = new IR::Type_P4List(yystack_[3].location+yystack_[0].location, yystack_[1].value.as < ConstType* > ()); }
#line 5680 "p4parser.tab.cpp"
    break;

  case 280:
#line 1008 "p4parser.ypp"
                                                { yylhs.value.as < ConstType* > () = new IR::Type_Tuple(yystack_[3].location+yystack_[0].location, *yystack_[1].value.as < IR::Vector<IR::Type>* > ()); }
#line 5686 "p4parser.tab.cpp"
    break;

  case 281:
#line 1012 "p4parser.ypp"
                                          { yylhs.value.as < ConstType* > () = new IR::Type_Stack(yystack_[3].location+yystack_[0].location, yystack_[3].value.as < IR::Type_Name* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 5692 "p4parser.tab.cpp"
    break;

  case 282:
#line 1013 "p4parser.ypp"
                                          { yylhs.value.as < ConstType* > () = new IR::Type_Stack(yystack_[3].location+yystack_[0].location, yystack_[3].value.as < ConstType* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 5698 "p4parser.tab.cpp"
    break;

  case 283:
#line 1017 "p4parser.ypp"
                                                { yylhs.value.as < ConstType* > () = new IR::Type_Specialized(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Type_Name* > (), yystack_[1].value.as < IR::Vector<IR::Type>* > ()); }
#line 5704 "p4parser.tab.cpp"
    break;

  case 284:
#line 1021 "p4parser.ypp"
             { yylhs.value.as < ConstType* > () = new IR::Type_Boolean(yystack_[0].location); }
#line 5710 "p4parser.tab.cpp"
    break;

  case 285:
#line 1022 "p4parser.ypp"
                 { yylhs.value.as < ConstType* > () = new IR::Type_MatchKind(yystack_[0].location); }
#line 5716 "p4parser.tab.cpp"
    break;

  case 286:
#line 1023 "p4parser.ypp"
             { yylhs.value.as < ConstType* > () = new IR::Type_Name(yystack_[0].location, new IR::Path(IR::ID(yystack_[0].location, "error"))); }
#line 5722 "p4parser.tab.cpp"
    break;

  case 287:
#line 1024 "p4parser.ypp"
             { yylhs.value.as < ConstType* > () = IR::Type::Bits::get(yystack_[0].location, 1); }
#line 5728 "p4parser.tab.cpp"
    break;

  case 288:
#line 1025 "p4parser.ypp"
             { yylhs.value.as < ConstType* > () = new IR::Type::String(yystack_[0].location); }
#line 5734 "p4parser.tab.cpp"
    break;

  case 289:
#line 1026 "p4parser.ypp"
             { yylhs.value.as < ConstType* > () = new IR::Type_InfInt(yystack_[0].location); }
#line 5740 "p4parser.tab.cpp"
    break;

  case 290:
#line 1028 "p4parser.ypp"
      { yylhs.value.as < ConstType* > () = IR::Type::Bits::get(yystack_[3].location+yystack_[0].location, parseConstantChecked(yystack_[1].location, yystack_[1].value.as < UnparsedConstant > ()), false); }
#line 5746 "p4parser.tab.cpp"
    break;

  case 291:
#line 1030 "p4parser.ypp"
      { yylhs.value.as < ConstType* > () = IR::Type::Bits::get(yystack_[3].location+yystack_[0].location, parseConstantChecked(yystack_[1].location, yystack_[1].value.as < UnparsedConstant > ()), true); }
#line 5752 "p4parser.tab.cpp"
    break;

  case 292:
#line 1032 "p4parser.ypp"
      { yylhs.value.as < ConstType* > () = IR::Type::Varbits::get(yystack_[3].location+yystack_[0].location, parseConstantChecked(yystack_[1].location, yystack_[1].value.as < UnparsedConstant > ())); }
#line 5758 "p4parser.tab.cpp"
    break;

  case 293:
#line 1035 "p4parser.ypp"
      { yylhs.value.as < ConstType* > () = new IR::Type_Bits(yystack_[5].location+yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), false); }
#line 5764 "p4parser.tab.cpp"
    break;

  case 294:
#line 1037 "p4parser.ypp"
      { yylhs.value.as < ConstType* > () = new IR::Type_Bits(yystack_[5].location+yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), true); }
#line 5770 "p4parser.tab.cpp"
    break;

  case 295:
#line 1039 "p4parser.ypp"
      { yylhs.value.as < ConstType* > () = new IR::Type_Varbits(yystack_[5].location+yystack_[0].location, yystack_[2].value.as < IR::Expression* > ()); }
#line 5776 "p4parser.tab.cpp"
    break;

  case 296:
#line 1043 "p4parser.ypp"
                  { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 5782 "p4parser.tab.cpp"
    break;

  case 297:
#line 1044 "p4parser.ypp"
                  { yylhs.value.as < ConstType* > () = new IR::Type_Void(yystack_[0].location); }
#line 5788 "p4parser.tab.cpp"
    break;

  case 298:
#line 1045 "p4parser.ypp"
                  { yylhs.value.as < ConstType* > () = new IR::Type_Name(yystack_[0].location, new IR::Path(*(new IR::ID(yystack_[0].location, yystack_[0].value.as < cstring > ())))); }
#line 5794 "p4parser.tab.cpp"
    break;

  case 299:
#line 1050 "p4parser.ypp"
                                { yylhs.value.as < IR::TypeParameters* > () = new IR::TypeParameters(); }
#line 5800 "p4parser.tab.cpp"
    break;

  case 300:
#line 1051 "p4parser.ypp"
                                { yylhs.value.as < IR::TypeParameters* > () = yystack_[0].value.as < IR::TypeParameters* > (); }
#line 5806 "p4parser.tab.cpp"
    break;

  case 301:
#line 1055 "p4parser.ypp"
                                        { yylhs.value.as < IR::TypeParameters* > () = new IR::TypeParameters(yystack_[2].location+yystack_[0].location, *yystack_[1].value.as < IR::IndexedVector<IR::Type_Var>* > ()); }
#line 5812 "p4parser.tab.cpp"
    break;

  case 302:
#line 1059 "p4parser.ypp"
                                     { yylhs.value.as < IR::IndexedVector<IR::Type_Var>* > () = new IR::IndexedVector<IR::Type_Var>();
                                       yylhs.value.as < IR::IndexedVector<IR::Type_Var>* > ()->push_back(new IR::Type_Var(yystack_[0].location, *yystack_[0].value.as < IR::ID* > ())); yylhs.value.as < IR::IndexedVector<IR::Type_Var>* > ()->srcInfo = yystack_[0].location; }
#line 5819 "p4parser.tab.cpp"
    break;

  case 303:
#line 1061 "p4parser.ypp"
                                     { (yylhs.value.as < IR::IndexedVector<IR::Type_Var>* > ()=yystack_[2].value.as < IR::IndexedVector<IR::Type_Var>* > ())->push_back(new IR::Type_Var(yystack_[0].location, *yystack_[0].value.as < IR::ID* > ())); yylhs.value.as < IR::IndexedVector<IR::Type_Var>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 5825 "p4parser.tab.cpp"
    break;

  case 304:
#line 1065 "p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 5831 "p4parser.tab.cpp"
    break;

  case 305:
#line 1066 "p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = new IR::Type_Name(yystack_[0].location, new IR::Path(*yystack_[0].value.as < IR::ID* > ())); }
#line 5837 "p4parser.tab.cpp"
    break;

  case 306:
#line 1068 "p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = new IR::Type_Void(yystack_[0].location); }
#line 5843 "p4parser.tab.cpp"
    break;

  case 307:
#line 1069 "p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = new IR::Type_Dontcare(yystack_[0].location); }
#line 5849 "p4parser.tab.cpp"
    break;

  case 308:
#line 1073 "p4parser.ypp"
                                     { yylhs.value.as < IR::Vector<IR::Type>* > () = new IR::Vector<IR::Type>(); }
#line 5855 "p4parser.tab.cpp"
    break;

  case 309:
#line 1074 "p4parser.ypp"
                                     { yylhs.value.as < IR::Vector<IR::Type>* > () = new IR::Vector<IR::Type>(); yylhs.value.as < IR::Vector<IR::Type>* > ()->push_back(yystack_[0].value.as < ConstType* > ()); yylhs.value.as < IR::Vector<IR::Type>* > ()->srcInfo = yystack_[0].location; }
#line 5861 "p4parser.tab.cpp"
    break;

  case 310:
#line 1075 "p4parser.ypp"
                                     { yylhs.value.as < IR::Vector<IR::Type>* > () = yystack_[2].value.as < IR::Vector<IR::Type>* > (); yylhs.value.as < IR::Vector<IR::Type>* > ()->push_back(yystack_[0].value.as < ConstType* > ()); yylhs.value.as < IR::Vector<IR::Type>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 5867 "p4parser.tab.cpp"
    break;

  case 311:
#line 1079 "p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = yystack_[0].value.as < ConstType* > (); }
#line 5873 "p4parser.tab.cpp"
    break;

  case 312:
#line 1080 "p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = new IR::Type_Void(yystack_[0].location); }
#line 5879 "p4parser.tab.cpp"
    break;

  case 313:
#line 1081 "p4parser.ypp"
                                  { yylhs.value.as < ConstType* > () = new IR::Type_Dontcare(yystack_[0].location); }
#line 5885 "p4parser.tab.cpp"
    break;

  case 314:
#line 1087 "p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Type>* > () = new IR::Vector<IR::Type>(); yylhs.value.as < IR::Vector<IR::Type>* > ()->push_back(yystack_[0].value.as < ConstType* > ()); yylhs.value.as < IR::Vector<IR::Type>* > ()->srcInfo = yystack_[0].location; }
#line 5891 "p4parser.tab.cpp"
    break;

  case 315:
#line 1088 "p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Type>* > () = yystack_[2].value.as < IR::Vector<IR::Type>* > (); yylhs.value.as < IR::Vector<IR::Type>* > ()->push_back(yystack_[0].value.as < ConstType* > ()); yylhs.value.as < IR::Vector<IR::Type>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 5897 "p4parser.tab.cpp"
    break;

  case 316:
#line 1092 "p4parser.ypp"
                                 { yylhs.value.as < IR::Type_Declaration* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 5903 "p4parser.tab.cpp"
    break;

  case 317:
#line 1093 "p4parser.ypp"
                                 { yylhs.value.as < IR::Type_Declaration* > () = yystack_[1].value.as < IR::Type_Declaration* > (); }
#line 5909 "p4parser.tab.cpp"
    break;

  case 318:
#line 1094 "p4parser.ypp"
                                 { driver.structure->pop(); yylhs.value.as < IR::Type_Declaration* > () = yystack_[1].value.as < IR::Type_Parser* > (); }
#line 5915 "p4parser.tab.cpp"
    break;

  case 319:
#line 1095 "p4parser.ypp"
                                 { driver.structure->pop(); yylhs.value.as < IR::Type_Declaration* > () = yystack_[1].value.as < IR::Type_Control* > (); }
#line 5921 "p4parser.tab.cpp"
    break;

  case 320:
#line 1096 "p4parser.ypp"
                                 { driver.structure->pop(); yylhs.value.as < IR::Type_Declaration* > () = yystack_[1].value.as < IR::Type_Declaration* > (); }
#line 5927 "p4parser.tab.cpp"
    break;

  case 321:
#line 1100 "p4parser.ypp"
                                       { yylhs.value.as < IR::Type_Declaration* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 5933 "p4parser.tab.cpp"
    break;

  case 322:
#line 1101 "p4parser.ypp"
                                       { yylhs.value.as < IR::Type_Declaration* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 5939 "p4parser.tab.cpp"
    break;

  case 323:
#line 1102 "p4parser.ypp"
                                       { yylhs.value.as < IR::Type_Declaration* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 5945 "p4parser.tab.cpp"
    break;

  case 324:
#line 1103 "p4parser.ypp"
                                       { yylhs.value.as < IR::Type_Declaration* > () = yystack_[0].value.as < IR::Type_Declaration* > (); }
#line 5951 "p4parser.tab.cpp"
    break;

  case 325:
#line 1107 "p4parser.ypp"
                                 { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), true); }
#line 5957 "p4parser.tab.cpp"
    break;

  case 326:
#line 1107 "p4parser.ypp"
                                                                                                       {
        driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
        driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 5965 "p4parser.tab.cpp"
    break;

  case 327:
#line 1110 "p4parser.ypp"
                              { yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Header(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), yystack_[8].value.as < IR::Annotations* > (), yystack_[4].value.as < IR::TypeParameters* > (), *yystack_[1].value.as < IR::IndexedVector<IR::StructField>* > ());
                                driver.structure->pop(); }
#line 5972 "p4parser.tab.cpp"
    break;

  case 328:
#line 1115 "p4parser.ypp"
                                  { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), true); }
#line 5978 "p4parser.tab.cpp"
    break;

  case 329:
#line 1115 "p4parser.ypp"
                                                                                                        {
        driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
        driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 5986 "p4parser.tab.cpp"
    break;

  case 330:
#line 1118 "p4parser.ypp"
                              { yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Struct(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), yystack_[8].value.as < IR::Annotations* > (), yystack_[4].value.as < IR::TypeParameters* > (), *yystack_[1].value.as < IR::IndexedVector<IR::StructField>* > ());
                                driver.structure->pop(); }
#line 5993 "p4parser.tab.cpp"
    break;

  case 331:
#line 1123 "p4parser.ypp"
                                       { driver.structure->pushContainerType(*yystack_[0].value.as < IR::ID* > (), true); }
#line 5999 "p4parser.tab.cpp"
    break;

  case 332:
#line 1123 "p4parser.ypp"
                                                                                                             {
        driver.structure->markAsTemplate(*yystack_[2].value.as < IR::ID* > ());
        driver.structure->declareTypes(&yystack_[0].value.as < IR::TypeParameters* > ()->parameters); }
#line 6007 "p4parser.tab.cpp"
    break;

  case 333:
#line 1126 "p4parser.ypp"
                              { yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_HeaderUnion(yystack_[6].location, *yystack_[6].value.as < IR::ID* > (), yystack_[8].value.as < IR::Annotations* > (), yystack_[4].value.as < IR::TypeParameters* > (), *yystack_[1].value.as < IR::IndexedVector<IR::StructField>* > ());
                                driver.structure->pop(); }
#line 6014 "p4parser.tab.cpp"
    break;

  case 334:
#line 1131 "p4parser.ypp"
                                       { yylhs.value.as < IR::IndexedVector<IR::StructField>* > () = new IR::IndexedVector<IR::StructField>(); }
#line 6020 "p4parser.tab.cpp"
    break;

  case 335:
#line 1132 "p4parser.ypp"
                                       { yylhs.value.as < IR::IndexedVector<IR::StructField>* > () = yystack_[1].value.as < IR::IndexedVector<IR::StructField>* > (); yystack_[1].value.as < IR::IndexedVector<IR::StructField>* > ()->push_back(yystack_[0].value.as < IR::StructField* > ()); yylhs.value.as < IR::IndexedVector<IR::StructField>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 6026 "p4parser.tab.cpp"
    break;

  case 336:
#line 1136 "p4parser.ypp"
                                       { yylhs.value.as < IR::StructField* > () = new IR::StructField(yystack_[1].location, *yystack_[1].value.as < IR::ID* > (), yystack_[3].value.as < IR::Annotations* > (), yystack_[2].value.as < ConstType* > ()); }
#line 6032 "p4parser.tab.cpp"
    break;

  case 337:
#line 1141 "p4parser.ypp"
                  { driver.structure->declareType(*yystack_[0].value.as < IR::ID* > ()); }
#line 6038 "p4parser.tab.cpp"
    break;

  case 338:
#line 1142 "p4parser.ypp"
                                                { yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Enum(yystack_[5].location, *yystack_[5].value.as < IR::ID* > (), *yystack_[2].value.as < IR::IndexedVector<IR::Declaration_ID>* > ()); }
#line 6044 "p4parser.tab.cpp"
    break;

  case 339:
#line 1143 "p4parser.ypp"
                                       { driver.structure->declareType(*yystack_[0].value.as < IR::ID* > ()); }
#line 6050 "p4parser.tab.cpp"
    break;

  case 340:
#line 1144 "p4parser.ypp"
                                                          {
              auto type = yystack_[6].value.as < ConstType* > ();
              yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_SerEnum(yystack_[5].location, *yystack_[5].value.as < IR::ID* > (), type, *yystack_[2].value.as < IR::IndexedVector<IR::SerEnumMember>* > ());
          }
#line 6059 "p4parser.tab.cpp"
    break;

  case 341:
#line 1151 "p4parser.ypp"
                                           { yylhs.value.as < IR::IndexedVector<IR::SerEnumMember>* > () = new IR::IndexedVector<IR::SerEnumMember>();
                                             yylhs.value.as < IR::IndexedVector<IR::SerEnumMember>* > ()->push_back(yystack_[0].value.as < IR::SerEnumMember* > ()); yylhs.value.as < IR::IndexedVector<IR::SerEnumMember>* > ()->srcInfo = yystack_[0].location; }
#line 6066 "p4parser.tab.cpp"
    break;

  case 342:
#line 1153 "p4parser.ypp"
                                                      { yylhs.value.as < IR::IndexedVector<IR::SerEnumMember>* > () = yystack_[2].value.as < IR::IndexedVector<IR::SerEnumMember>* > (); yystack_[2].value.as < IR::IndexedVector<IR::SerEnumMember>* > ()->push_back(yystack_[0].value.as < IR::SerEnumMember* > ()); yylhs.value.as < IR::IndexedVector<IR::SerEnumMember>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 6072 "p4parser.tab.cpp"
    break;

  case 343:
#line 1157 "p4parser.ypp"
                              { yylhs.value.as < IR::SerEnumMember* > () = new IR::SerEnumMember(yystack_[2].location+yystack_[0].location, *yystack_[2].value.as < IR::ID* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6078 "p4parser.tab.cpp"
    break;

  case 344:
#line 1162 "p4parser.ypp"
        { yylhs.value.as < IR::Type_Error* > () = new IR::Type_Error(yystack_[3].location + yystack_[0].location, IR::ID(yystack_[3].location, "error"), *yystack_[1].value.as < IR::IndexedVector<IR::Declaration_ID>* > ()); }
#line 6084 "p4parser.tab.cpp"
    break;

  case 345:
#line 1167 "p4parser.ypp"
        { yylhs.value.as < IR::Node* > () = new IR::Declaration_MatchKind(yystack_[4].location + yystack_[1].location, *yystack_[2].value.as < IR::IndexedVector<IR::Declaration_ID>* > ()); }
#line 6090 "p4parser.tab.cpp"
    break;

  case 346:
#line 1171 "p4parser.ypp"
                              { yylhs.value.as < IR::IndexedVector<IR::Declaration_ID>* > () = new IR::IndexedVector<IR::Declaration_ID>();
                                yylhs.value.as < IR::IndexedVector<IR::Declaration_ID>* > ()->push_back(new IR::Declaration_ID(yystack_[0].location, *yystack_[0].value.as < IR::ID* > ())); yylhs.value.as < IR::IndexedVector<IR::Declaration_ID>* > ()->srcInfo = yystack_[0].location; }
#line 6097 "p4parser.tab.cpp"
    break;

  case 347:
#line 1173 "p4parser.ypp"
                              { yylhs.value.as < IR::IndexedVector<IR::Declaration_ID>* > () = yystack_[2].value.as < IR::IndexedVector<IR::Declaration_ID>* > (); yylhs.value.as < IR::IndexedVector<IR::Declaration_ID>* > ()->push_back(new IR::Declaration_ID(yystack_[0].location, *yystack_[0].value.as < IR::ID* > ()));
                                yylhs.value.as < IR::IndexedVector<IR::Declaration_ID>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 6104 "p4parser.tab.cpp"
    break;

  case 348:
#line 1178 "p4parser.ypp"
                                            { driver.structure->declareType(*yystack_[0].value.as < IR::ID* > ());
          yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Typedef(yystack_[0].location, *yystack_[0].value.as < IR::ID* > (), new IR::Annotations(*yystack_[3].value.as < IR::Annotations* > ()), yystack_[1].value.as < ConstType* > ()); }
#line 6111 "p4parser.tab.cpp"
    break;

  case 349:
#line 1180 "p4parser.ypp"
                                                           { driver.structure->declareType(*yystack_[0].value.as < IR::ID* > ());
                        yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Typedef(yystack_[0].location, *yystack_[0].value.as < IR::ID* > (), new IR::Annotations(*yystack_[3].value.as < IR::Annotations* > ()), yystack_[1].value.as < IR::Type_Declaration* > ()); }
#line 6118 "p4parser.tab.cpp"
    break;

  case 350:
#line 1182 "p4parser.ypp"
                                         { driver.structure->declareType(*yystack_[0].value.as < IR::ID* > ());
          yylhs.value.as < IR::Type_Declaration* > () = new IR::Type_Newtype(yystack_[0].location, *yystack_[0].value.as < IR::ID* > (), new IR::Annotations(*yystack_[3].value.as < IR::Annotations* > ()), yystack_[1].value.as < ConstType* > ()); }
#line 6125 "p4parser.tab.cpp"
    break;

  case 351:
#line 1191 "p4parser.ypp"
        { auto mc = new IR::MethodCallExpression(yystack_[4].location + yystack_[1].location, yystack_[4].value.as < IR::Expression* > (),
                                                 new IR::Vector<IR::Type>(), yystack_[2].value.as < IR::Vector<IR::Argument>* > ());
          yylhs.value.as < IR::Statement* > () = new IR::MethodCallStatement(yystack_[4].location + yystack_[1].location, mc); }
#line 6133 "p4parser.tab.cpp"
    break;

  case 352:
#line 1196 "p4parser.ypp"
        { auto mc = new IR::MethodCallExpression(yystack_[7].location + yystack_[1].location,
                                                 yystack_[7].value.as < IR::Expression* > (), yystack_[5].value.as < IR::Vector<IR::Type>* > (), yystack_[2].value.as < IR::Vector<IR::Argument>* > ());
          yylhs.value.as < IR::Statement* > () = new IR::MethodCallStatement(yystack_[7].location + yystack_[1].location, mc); }
#line 6141 "p4parser.tab.cpp"
    break;

  case 353:
#line 1201 "p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::AssignmentStatement(yystack_[2].location, yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 6147 "p4parser.tab.cpp"
    break;

  case 354:
#line 1206 "p4parser.ypp"
               { yylhs.value.as < IR::Statement* > () = new IR::EmptyStatement(yystack_[0].location); }
#line 6153 "p4parser.tab.cpp"
    break;

  case 355:
#line 1210 "p4parser.ypp"
               { yylhs.value.as < IR::Statement* > () = new IR::ExitStatement(yystack_[1].location); }
#line 6159 "p4parser.tab.cpp"
    break;

  case 356:
#line 1214 "p4parser.ypp"
                            { yylhs.value.as < IR::Statement* > () = new IR::ReturnStatement(yystack_[1].location, nullptr); }
#line 6165 "p4parser.tab.cpp"
    break;

  case 357:
#line 1215 "p4parser.ypp"
                            { yylhs.value.as < IR::Statement* > () = new IR::ReturnStatement(yystack_[2].location, yystack_[1].value.as < IR::Expression* > ()); }
#line 6171 "p4parser.tab.cpp"
    break;

  case 358:
#line 1220 "p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::IfStatement(yystack_[4].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Statement* > (), nullptr); }
#line 6177 "p4parser.tab.cpp"
    break;

  case 359:
#line 1222 "p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::IfStatement(yystack_[6].location, yystack_[4].value.as < IR::Expression* > (), yystack_[2].value.as < IR::Statement* > (), yystack_[0].value.as < IR::Statement* > ()); }
#line 6183 "p4parser.tab.cpp"
    break;

  case 360:
#line 1227 "p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::WhileStatement(yystack_[4].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Statement* > ()); }
#line 6189 "p4parser.tab.cpp"
    break;

  case 361:
#line 1232 "p4parser.ypp"
        { yylhs.value.as < IR::Statement* > () = new IR::ForStatement(yystack_[8].location, yystack_[6].value.as < IR::Statement* > (), yystack_[4].value.as < IR::Vector<IR::Expression>* > (), yystack_[2].value.as < IR::Vector<IR::Expression>* > (), yystack_[0].value.as < IR::Statement* > ()); }
#line 6195 "p4parser.tab.cpp"
    break;

  case 362:
#line 1237 "p4parser.ypp"
        {
            yylhs.value.as < IR::Statement* > () = new IR::ForInitializer(nullptr, yystack_[0].value.as < IR::IndexedVector<IR::NamedExpression>* > ());
        }
#line 6203 "p4parser.tab.cpp"
    break;

  case 363:
#line 1241 "p4parser.ypp"
        {
           yylhs.value.as < IR::Statement* > () = new IR::ForInitializer(yystack_[1].value.as < ConstType* > (), yystack_[0].value.as < IR::IndexedVector<IR::NamedExpression>* > ());
        }
#line 6211 "p4parser.tab.cpp"
    break;

  case 364:
#line 1245 "p4parser.ypp"
        {

        }
#line 6219 "p4parser.tab.cpp"
    break;

  case 365:
#line 1254 "p4parser.ypp"
                                                  {
                                  auto method = new IR::Member(
                                      yystack_[6].location + yystack_[4].location, new IR::TypeNameExpression(yystack_[6].value.as < IR::Type_Name* > ()), IR::ID(yystack_[4].location, "apply"));
                                  auto mce = new IR::MethodCallExpression(yystack_[6].location + yystack_[1].location, method, yystack_[2].value.as < IR::Vector<IR::Argument>* > ());
                                  yylhs.value.as < IR::Statement* > () = new IR::MethodCallStatement(yystack_[6].location + yystack_[1].location, mce); }
#line 6229 "p4parser.tab.cpp"
    break;

  case 366:
#line 1259 "p4parser.ypp"
                                                         {
                                  auto method = new IR::Member(
                                      yystack_[6].location + yystack_[4].location, new IR::TypeNameExpression(yystack_[6].value.as < ConstType* > ()), IR::ID(yystack_[4].location, "apply"));
                                  auto mce = new IR::MethodCallExpression(yystack_[6].location + yystack_[1].location, method, yystack_[2].value.as < IR::Vector<IR::Argument>* > ());
                                  yylhs.value.as < IR::Statement* > () = new IR::MethodCallStatement(yystack_[6].location + yystack_[1].location, mce); }
#line 6239 "p4parser.tab.cpp"
    break;

  case 367:
#line 1267 "p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6245 "p4parser.tab.cpp"
    break;

  case 368:
#line 1268 "p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6251 "p4parser.tab.cpp"
    break;

  case 369:
#line 1269 "p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6257 "p4parser.tab.cpp"
    break;

  case 370:
#line 1270 "p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6263 "p4parser.tab.cpp"
    break;

  case 371:
#line 1271 "p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6269 "p4parser.tab.cpp"
    break;

  case 372:
#line 1272 "p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6275 "p4parser.tab.cpp"
    break;

  case 373:
#line 1273 "p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::BlockStatement* > (); }
#line 6281 "p4parser.tab.cpp"
    break;

  case 374:
#line 1274 "p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6287 "p4parser.tab.cpp"
    break;

  case 375:
#line 1275 "p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6293 "p4parser.tab.cpp"
    break;

  case 376:
#line 1276 "p4parser.ypp"
                                       { yylhs.value.as < IR::Statement* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6299 "p4parser.tab.cpp"
    break;

  case 377:
#line 1280 "p4parser.ypp"
                         { driver.structure->pushNamespace(yystack_[0].location, false); }
#line 6305 "p4parser.tab.cpp"
    break;

  case 378:
#line 1281 "p4parser.ypp"
                         { driver.structure->pop();
                           yylhs.value.as < IR::BlockStatement* > () = new IR::BlockStatement(yystack_[4].location + yystack_[0].location, yystack_[4].value.as < IR::Annotations* > (), *yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > ()); }
#line 6312 "p4parser.tab.cpp"
    break;

  case 379:
#line 1286 "p4parser.ypp"
                                            { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = new IR::IndexedVector<IR::StatOrDecl>(); }
#line 6318 "p4parser.tab.cpp"
    break;

  case 380:
#line 1287 "p4parser.ypp"
                                            { yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > () = yystack_[1].value.as < IR::IndexedVector<IR::StatOrDecl>* > (); yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > ()->push_back(yystack_[0].value.as < IR::StatOrDecl* > ()); yylhs.value.as < IR::IndexedVector<IR::StatOrDecl>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 6324 "p4parser.tab.cpp"
    break;

  case 381:
#line 1291 "p4parser.ypp"
                                                    {
            yylhs.value.as < IR::Statement* > () = new IR::SwitchStatement(yystack_[6].location, yystack_[4].value.as < IR::Expression* > (), std::move(*yystack_[1].value.as < IR::Vector<IR::SwitchCase>* > ())); }
#line 6331 "p4parser.tab.cpp"
    break;

  case 382:
#line 1296 "p4parser.ypp"
                               { yylhs.value.as < IR::Vector<IR::SwitchCase>* > () = new IR::Vector<IR::SwitchCase>(); }
#line 6337 "p4parser.tab.cpp"
    break;

  case 383:
#line 1297 "p4parser.ypp"
                               { yylhs.value.as < IR::Vector<IR::SwitchCase>* > () = yystack_[1].value.as < IR::Vector<IR::SwitchCase>* > (); yylhs.value.as < IR::Vector<IR::SwitchCase>* > ()->push_back(yystack_[0].value.as < IR::SwitchCase* > ()); yylhs.value.as < IR::Vector<IR::SwitchCase>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 6343 "p4parser.tab.cpp"
    break;

  case 384:
#line 1301 "p4parser.ypp"
                                     { yylhs.value.as < IR::SwitchCase* > () = new IR::SwitchCase(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::BlockStatement* > ()); }
#line 6349 "p4parser.tab.cpp"
    break;

  case 385:
#line 1302 "p4parser.ypp"
                                     { yylhs.value.as < IR::SwitchCase* > () = new IR::SwitchCase(yystack_[1].location, yystack_[1].value.as < IR::Expression* > (), nullptr); }
#line 6355 "p4parser.tab.cpp"
    break;

  case 386:
#line 1306 "p4parser.ypp"
                               { yylhs.value.as < IR::Expression* > () = new IR::DefaultExpression(yystack_[0].location); }
#line 6361 "p4parser.tab.cpp"
    break;

  case 387:
#line 1307 "p4parser.ypp"
                               { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 6367 "p4parser.tab.cpp"
    break;

  case 388:
#line 1311 "p4parser.ypp"
                               { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 6373 "p4parser.tab.cpp"
    break;

  case 389:
#line 1312 "p4parser.ypp"
                               { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 6379 "p4parser.tab.cpp"
    break;

  case 390:
#line 1313 "p4parser.ypp"
                               { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Statement* > (); }
#line 6385 "p4parser.tab.cpp"
    break;

  case 391:
#line 1318 "p4parser.ypp"
                               { yylhs.value.as < IR::StatOrDecl* > () = yystack_[0].value.as < IR::Declaration* > (); }
#line 6391 "p4parser.tab.cpp"
    break;

  case 392:
#line 1326 "p4parser.ypp"
          { yylhs.value.as < IR::Declaration* > () = new IR::P4Table(yystack_[3].location, *yystack_[3].value.as < IR::ID* > (), yystack_[5].value.as < IR::Annotations* > (), new IR::TableProperties(yystack_[1].location, *yystack_[1].value.as < IR::IndexedVector<IR::Property>* > ())); }
#line 6397 "p4parser.tab.cpp"
    break;

  case 393:
#line 1330 "p4parser.ypp"
                                         { yylhs.value.as < IR::IndexedVector<IR::Property>* > () = new IR::IndexedVector<IR::Property>();
                                           yylhs.value.as < IR::IndexedVector<IR::Property>* > ()->push_back(yystack_[0].value.as < IR::Property* > ()); yylhs.value.as < IR::IndexedVector<IR::Property>* > ()->srcInfo = yystack_[0].location; }
#line 6404 "p4parser.tab.cpp"
    break;

  case 394:
#line 1332 "p4parser.ypp"
                                         { yylhs.value.as < IR::IndexedVector<IR::Property>* > () = yystack_[1].value.as < IR::IndexedVector<IR::Property>* > (); yylhs.value.as < IR::IndexedVector<IR::Property>* > ()->push_back(yystack_[0].value.as < IR::Property* > ()); yylhs.value.as < IR::IndexedVector<IR::Property>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 6410 "p4parser.tab.cpp"
    break;

  case 395:
#line 1337 "p4parser.ypp"
        { auto v = new IR::Key(yystack_[1].location, *yystack_[1].value.as < IR::Vector<IR::KeyElement>* > ());
          auto id = IR::ID(yystack_[4].location, "key");
          yylhs.value.as < IR::Property* > () = new IR::Property( yystack_[4].location + yystack_[0].location, id, v, false); }
#line 6418 "p4parser.tab.cpp"
    break;

  case 396:
#line 1341 "p4parser.ypp"
        { auto v = new IR::ActionList(yystack_[1].location, *yystack_[1].value.as < IR::IndexedVector<IR::ActionListElement>* > ());
          auto id = IR::ID(yystack_[4].location, "actions");
          yylhs.value.as < IR::Property* > () = new IR::Property(yystack_[4].location + yystack_[0].location, id, v, false); }
#line 6426 "p4parser.tab.cpp"
    break;

  case 397:
#line 1345 "p4parser.ypp"
        { auto l = new IR::EntriesList(yystack_[4].location, *yystack_[1].value.as < IR::Vector<IR::Entry>* > ());
          auto id = IR::ID(yystack_[4].location+yystack_[0].location, "entries");
          yylhs.value.as < IR::Property* > () = new IR::Property(yystack_[4].location, id, yystack_[6].value.as < IR::Annotations* > (), l, yystack_[5].value.as < OptionalConst > ().isConst); }
#line 6434 "p4parser.tab.cpp"
    break;

  case 398:
#line 1349 "p4parser.ypp"
        { auto v = new IR::ExpressionValue(yystack_[1].location, yystack_[1].value.as < IR::Expression* > ());
          auto id = *yystack_[3].value.as < IR::ID* > ();
          yylhs.value.as < IR::Property* > () = new IR::Property(yystack_[3].value.as < IR::ID* > ()->srcInfo, id, yystack_[5].value.as < IR::Annotations* > (), v, yystack_[4].value.as < OptionalConst > ().isConst); }
#line 6442 "p4parser.tab.cpp"
    break;

  case 399:
#line 1355 "p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::KeyElement>* > () = new IR::Vector<IR::KeyElement>(); }
#line 6448 "p4parser.tab.cpp"
    break;

  case 400:
#line 1356 "p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::KeyElement>* > () = yystack_[1].value.as < IR::Vector<IR::KeyElement>* > (); yylhs.value.as < IR::Vector<IR::KeyElement>* > ()->push_back(yystack_[0].value.as < IR::KeyElement* > ()); yylhs.value.as < IR::Vector<IR::KeyElement>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 6454 "p4parser.tab.cpp"
    break;

  case 401:
#line 1361 "p4parser.ypp"
                                         { auto expr = new IR::PathExpression(*yystack_[2].value.as < IR::ID* > ());
                                           yylhs.value.as < IR::KeyElement* > () = new IR::KeyElement(yystack_[4].location, yystack_[1].value.as < IR::Annotations* > (), yystack_[4].value.as < IR::Expression* > (), expr); }
#line 6461 "p4parser.tab.cpp"
    break;

  case 402:
#line 1366 "p4parser.ypp"
             { yylhs.value.as < IR::IndexedVector<IR::ActionListElement>* > () = new IR::IndexedVector<IR::ActionListElement>(); }
#line 6467 "p4parser.tab.cpp"
    break;

  case 403:
#line 1368 "p4parser.ypp"
             { yylhs.value.as < IR::IndexedVector<IR::ActionListElement>* > () = yystack_[3].value.as < IR::IndexedVector<IR::ActionListElement>* > (); yylhs.value.as < IR::IndexedVector<IR::ActionListElement>* > ()->push_back(new IR::ActionListElement(yystack_[1].location, yystack_[2].value.as < IR::Annotations* > (), yystack_[1].value.as < IR::Expression* > ())); yylhs.value.as < IR::IndexedVector<IR::ActionListElement>* > ()->srcInfo = yystack_[3].location + yystack_[1].location; }
#line 6473 "p4parser.tab.cpp"
    break;

  case 404:
#line 1373 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::PathExpression(yystack_[0].value.as < IR::Path* > ()); }
#line 6479 "p4parser.tab.cpp"
    break;

  case 405:
#line 1375 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::MethodCallExpression(yystack_[3].location+yystack_[1].location, new IR::PathExpression(yystack_[3].value.as < IR::Path* > ()), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 6485 "p4parser.tab.cpp"
    break;

  case 406:
#line 1382 "p4parser.ypp"
        { if (auto l = yystack_[4].value.as < IR::Expression* > ()->to<IR::ListExpression>())
            yylhs.value.as < IR::Entry* > () = new IR::Entry(yystack_[4].location+yystack_[1].location, yystack_[1].value.as < IR::Annotations* > (), yystack_[6].value.as < OptionalConst > ().isConst, yystack_[5].value.as < IR::Expression* > (), l, yystack_[2].value.as < IR::Expression* > (), false);
          else {  // if not a tuple, make it a list of 1
            IR::Vector<IR::Expression> le(yystack_[4].value.as < IR::Expression* > ());
            yylhs.value.as < IR::Entry* > () = new IR::Entry(yystack_[4].location+yystack_[1].location, yystack_[1].value.as < IR::Annotations* > (), yystack_[6].value.as < OptionalConst > ().isConst, yystack_[5].value.as < IR::Expression* > (),
                   new IR::ListExpression(yystack_[4].location, le), yystack_[2].value.as < IR::Expression* > (), true);
          }
        }
#line 6498 "p4parser.tab.cpp"
    break;

  case 407:
#line 1393 "p4parser.ypp"
        { if (auto l = yystack_[4].value.as < IR::Expression* > ()->to<IR::ListExpression>())
            yylhs.value.as < IR::Entry* > () = new IR::Entry(yystack_[4].location+yystack_[1].location, yystack_[1].value.as < IR::Annotations* > (), yystack_[5].value.as < OptionalConst > ().isConst, nullptr, l, yystack_[2].value.as < IR::Expression* > (), false);
          else {  // if not a tuple, make it a list of 1
            IR::Vector<IR::Expression> le(yystack_[4].value.as < IR::Expression* > ());
            yylhs.value.as < IR::Entry* > () = new IR::Entry(yystack_[4].location+yystack_[1].location, yystack_[1].value.as < IR::Annotations* > (), yystack_[5].value.as < OptionalConst > ().isConst, nullptr,
                   new IR::ListExpression(yystack_[4].location, le), yystack_[2].value.as < IR::Expression* > (), true);
          }
        }
#line 6511 "p4parser.tab.cpp"
    break;

  case 408:
#line 1404 "p4parser.ypp"
                                     { yylhs.value.as < IR::Expression* > () = new IR::Constant(parseConstantChecked(yystack_[1].location, yystack_[1].value.as < UnparsedConstant > ())); }
#line 6517 "p4parser.tab.cpp"
    break;

  case 409:
#line 1405 "p4parser.ypp"
                                          { yylhs.value.as < IR::Expression* > () = yystack_[2].value.as < IR::Expression* > (); }
#line 6523 "p4parser.tab.cpp"
    break;

  case 410:
#line 1409 "p4parser.ypp"
                                     { yylhs.value.as < IR::Vector<IR::Entry>* > () = new IR::Vector<IR::Entry>(); }
#line 6529 "p4parser.tab.cpp"
    break;

  case 411:
#line 1410 "p4parser.ypp"
                                     { yylhs.value.as < IR::Vector<IR::Entry>* > () = yystack_[1].value.as < IR::Vector<IR::Entry>* > (); yylhs.value.as < IR::Vector<IR::Entry>* > ()->push_back(yystack_[0].value.as < IR::Entry* > ()); yylhs.value.as < IR::Vector<IR::Entry>* > ()->srcInfo = yystack_[1].location + yystack_[0].location; }
#line 6535 "p4parser.tab.cpp"
    break;

  case 412:
#line 1417 "p4parser.ypp"
        { auto pl = new IR::ParameterList(yystack_[2].location, *yystack_[2].value.as < IR::IndexedVector<IR::Parameter>* > ());
          yylhs.value.as < IR::Declaration* > () = new IR::P4Action(yystack_[4].location, *yystack_[4].value.as < IR::ID* > (), yystack_[6].value.as < IR::Annotations* > (), pl, yystack_[0].value.as < IR::BlockStatement* > ()); }
#line 6542 "p4parser.tab.cpp"
    break;

  case 413:
#line 1426 "p4parser.ypp"
        {
            //todo Add regActionIR
            yylhs.value.as < IR::Declaration* > () = new IR::RegisterActionDeclaration(yystack_[17].location, *yystack_[10].value.as < IR::ID* > (), yystack_[15].value.as < IR::Vector<IR::Type>* > (), yystack_[12].value.as < IR::Expression* > (), yystack_[7].value.as < Token > ());
        }
#line 6551 "p4parser.tab.cpp"
    break;

  case 414:
#line 1436 "p4parser.ypp"
                                     { auto ann = new IR::Annotations(yystack_[4].location, *yystack_[4].value.as < IR::Vector<IR::Annotation>* > ());
                                       yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Variable(yystack_[4].location+yystack_[1].location, *yystack_[2].value.as < IR::ID* > (), ann, yystack_[3].value.as < ConstType* > (), yystack_[1].value.as < IR::Expression* > ());
                                       driver.structure->declareObject(*yystack_[2].value.as < IR::ID* > (), yystack_[3].value.as < ConstType* > ()->toString()); }
#line 6559 "p4parser.tab.cpp"
    break;

  case 415:
#line 1440 "p4parser.ypp"
                                     { yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Variable(yystack_[3].location+yystack_[0].location, *yystack_[2].value.as < IR::ID* > (), yystack_[3].value.as < ConstType* > (), yystack_[1].value.as < IR::Expression* > ());
                                       driver.structure->declareObject(*yystack_[2].value.as < IR::ID* > (), yystack_[3].value.as < ConstType* > ()->toString()); }
#line 6566 "p4parser.tab.cpp"
    break;

  case 416:
#line 1446 "p4parser.ypp"
        {
            //todo register_decl IR
            yylhs.value.as < IR::Declaration* > () = new IR::RegisterDeclaration(yystack_[8].location, *yystack_[1].value.as < IR::ID* > (), yystack_[6].value.as < IR::Vector<IR::Type>* > (), yystack_[3].value.as < IR::Expression* > ());
        }
#line 6575 "p4parser.tab.cpp"
    break;

  case 417:
#line 1453 "p4parser.ypp"
                                     { yylhs.value.as < IR::Declaration* > () = new IR::Declaration_Constant(yystack_[3].location, *yystack_[3].value.as < IR::ID* > (), yystack_[6].value.as < IR::Annotations* > (), yystack_[4].value.as < ConstType* > (), yystack_[1].value.as < IR::Expression* > ());
                                       driver.structure->declareObject(*yystack_[3].value.as < IR::ID* > (), yystack_[4].value.as < ConstType* > ()->toString()); }
#line 6582 "p4parser.tab.cpp"
    break;

  case 418:
#line 1458 "p4parser.ypp"
                                       { yylhs.value.as < IR::Expression* > () = nullptr; }
#line 6588 "p4parser.tab.cpp"
    break;

  case 419:
#line 1459 "p4parser.ypp"
                                       { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 6594 "p4parser.tab.cpp"
    break;

  case 420:
#line 1463 "p4parser.ypp"
                                          { yylhs.value.as < IR::Expression* > () = yystack_[0].value.as < IR::Expression* > (); }
#line 6600 "p4parser.tab.cpp"
    break;

  case 421:
#line 1469 "p4parser.ypp"
                                         {
            driver.structure->pop();
            yylhs.value.as < IR::Declaration* > () = new IR::Function(yystack_[1].value.as < IR::Method* > ()->srcInfo, yystack_[1].value.as < IR::Method* > ()->name, yystack_[1].value.as < IR::Method* > ()->type, yystack_[0].value.as < IR::BlockStatement* > ()); }
#line 6608 "p4parser.tab.cpp"
    break;

  case 422:
#line 1475 "p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Argument>* > () = new IR::Vector<IR::Argument>(); }
#line 6614 "p4parser.tab.cpp"
    break;

  case 423:
#line 1476 "p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Argument>* > () = yystack_[0].value.as < IR::Vector<IR::Argument>* > (); }
#line 6620 "p4parser.tab.cpp"
    break;

  case 424:
#line 1480 "p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Argument>* > () = new IR::Vector<IR::Argument>();
                                           yylhs.value.as < IR::Vector<IR::Argument>* > ()->push_back(yystack_[0].value.as < IR::Argument* > ()); yylhs.value.as < IR::Vector<IR::Argument>* > ()->srcInfo = yystack_[0].location; }
#line 6627 "p4parser.tab.cpp"
    break;

  case 425:
#line 1482 "p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Argument>* > () = yystack_[2].value.as < IR::Vector<IR::Argument>* > (); yylhs.value.as < IR::Vector<IR::Argument>* > ()->push_back(yystack_[0].value.as < IR::Argument* > ()); yylhs.value.as < IR::Vector<IR::Argument>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 6633 "p4parser.tab.cpp"
    break;

  case 426:
#line 1486 "p4parser.ypp"
                                         { yylhs.value.as < IR::Argument* > () = new IR::Argument(yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 6639 "p4parser.tab.cpp"
    break;

  case 427:
#line 1487 "p4parser.ypp"
                                         { yylhs.value.as < IR::Argument* > () = new IR::Argument(yystack_[2].location, *yystack_[2].value.as < IR::ID* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6645 "p4parser.tab.cpp"
    break;

  case 428:
#line 1488 "p4parser.ypp"
                                         { yylhs.value.as < IR::Argument* > () = new IR::Argument(yystack_[0].location, new IR::DefaultExpression(yystack_[0].location)); }
#line 6651 "p4parser.tab.cpp"
    break;

  case 429:
#line 1489 "p4parser.ypp"
                                         { yylhs.value.as < IR::Argument* > () = new IR::Argument(yystack_[2].location, *yystack_[2].value.as < IR::ID* > (), new IR::DefaultExpression(yystack_[0].location)); }
#line 6657 "p4parser.tab.cpp"
    break;

  case 430:
#line 1493 "p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>(); }
#line 6663 "p4parser.tab.cpp"
    break;

  case 431:
#line 1494 "p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>();
                                           yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[0].location; }
#line 6670 "p4parser.tab.cpp"
    break;

  case 432:
#line 1496 "p4parser.ypp"
                                         { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[2].value.as < IR::Vector<IR::Expression>* > (); yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[0].value.as < IR::Expression* > ()); yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 6676 "p4parser.tab.cpp"
    break;

  case 433:
#line 1500 "p4parser.ypp"
                                         { yylhs.value.as < IR::Path* > () = new IR::Path(*yystack_[0].value.as < IR::ID* > ()); }
#line 6682 "p4parser.tab.cpp"
    break;

  case 434:
#line 1501 "p4parser.ypp"
                                         { yylhs.value.as < IR::Path* > () = new IR::Path(*yystack_[0].value.as < IR::ID* > (), true);
                                           driver.structure->clearPath(); }
#line 6689 "p4parser.tab.cpp"
    break;

  case 435:
#line 1506 "p4parser.ypp"
        { driver.structure->relativePathFromLastSymbol(); }
#line 6695 "p4parser.tab.cpp"
    break;

  case 436:
#line 1506 "p4parser.ypp"
                                                                 {
          driver.structure->clearPath(); yylhs.value.as < IR::ID* > () = yystack_[0].value.as < IR::ID* > (); }
#line 6702 "p4parser.tab.cpp"
    break;

  case 437:
#line 1511 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::PathExpression(yystack_[0].value.as < IR::Path* > ()); }
#line 6708 "p4parser.tab.cpp"
    break;

  case 438:
#line 1512 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::This(yystack_[0].location); }
#line 6714 "p4parser.tab.cpp"
    break;

  case 439:
#line 1513 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[1].location + yystack_[0].location, yystack_[1].value.as < IR::Expression* > (), *yystack_[0].value.as < IR::ID* > ()); }
#line 6720 "p4parser.tab.cpp"
    break;

  case 440:
#line 1514 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::ArrayIndex(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 6726 "p4parser.tab.cpp"
    break;

  case 441:
#line 1515 "p4parser.ypp"
                                               { yylhs.value.as < IR::Expression* > () = new IR::Slice(yystack_[5].location + yystack_[0].location, yystack_[5].value.as < IR::Expression* > (), yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 6732 "p4parser.tab.cpp"
    break;

  case 442:
#line 1519 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0); }
#line 6738 "p4parser.tab.cpp"
    break;

  case 443:
#line 1520 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Dots(yystack_[0].location); }
#line 6744 "p4parser.tab.cpp"
    break;

  case 444:
#line 1521 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 6750 "p4parser.tab.cpp"
    break;

  case 445:
#line 1522 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BoolLiteral(yystack_[0].location, true); }
#line 6756 "p4parser.tab.cpp"
    break;

  case 446:
#line 1523 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BoolLiteral(yystack_[0].location, false); }
#line 6762 "p4parser.tab.cpp"
    break;

  case 447:
#line 1524 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::This(yystack_[0].location); }
#line 6768 "p4parser.tab.cpp"
    break;

  case 448:
#line 1525 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::PathExpression(yystack_[0].value.as < IR::Path* > ()); }
#line 6774 "p4parser.tab.cpp"
    break;

  case 449:
#line 1526 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::ArrayIndex(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 6780 "p4parser.tab.cpp"
    break;

  case 450:
#line 1527 "p4parser.ypp"
                                                   { yylhs.value.as < IR::Expression* > () = new IR::Slice(yystack_[5].location + yystack_[0].location, yystack_[5].value.as < IR::Expression* > (), yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 6786 "p4parser.tab.cpp"
    break;

  case 451:
#line 1528 "p4parser.ypp"
                                              { yylhs.value.as < IR::Expression* > () = new IR::ListExpression(yystack_[3].location + yystack_[0].location, *yystack_[2].value.as < IR::Vector<IR::Expression>* > ()); }
#line 6792 "p4parser.tab.cpp"
    break;

  case 452:
#line 1529 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Invalid(yystack_[0].location, IR::Type::Unknown::get()); }
#line 6798 "p4parser.tab.cpp"
    break;

  case 453:
#line 1530 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::StructExpression(
                                                  yystack_[3].location + yystack_[0].location, IR::Type::Unknown::get(), (IR::Type_Name*)nullptr, *yystack_[2].value.as < IR::IndexedVector<IR::NamedExpression>* > ()); }
#line 6805 "p4parser.tab.cpp"
    break;

  case 454:
#line 1532 "p4parser.ypp"
                                               {
                                           auto list = yystack_[4].value.as < IR::IndexedVector<IR::NamedExpression>* > ();
                                           list->push_back(new IR::NamedDots(yystack_[2].location));
                                           list->srcInfo = list->srcInfo + yystack_[2].location;
                                           yylhs.value.as < IR::Expression* > () = new IR::StructExpression(
                                                  yystack_[5].location + yystack_[2].location, IR::Type::Unknown::get(),
                                                  (IR::Type_Name*)nullptr, *list); }
#line 6817 "p4parser.tab.cpp"
    break;

  case 455:
#line 1539 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = yystack_[1].value.as < IR::Expression* > (); }
#line 6823 "p4parser.tab.cpp"
    break;

  case 456:
#line 1540 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::LNot(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 6829 "p4parser.tab.cpp"
    break;

  case 457:
#line 1541 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Cmpl(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 6835 "p4parser.tab.cpp"
    break;

  case 458:
#line 1542 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Neg(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 6841 "p4parser.tab.cpp"
    break;

  case 459:
#line 1543 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::UPlus(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 6847 "p4parser.tab.cpp"
    break;

  case 460:
#line 1545 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[1].location + yystack_[0].location, new IR::TypeNameExpression(yystack_[1].location, yystack_[1].value.as < IR::Type_Name* > ()), *yystack_[0].value.as < IR::ID* > ()); }
#line 6853 "p4parser.tab.cpp"
    break;

  case 461:
#line 1547 "p4parser.ypp"
        { auto typeName = new IR::Type_Name(yystack_[2].location, new IR::Path(IR::ID(yystack_[2].location, "error")));
          yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[2].location+yystack_[0].location, new IR::TypeNameExpression(yystack_[2].location+yystack_[0].location, typeName), *yystack_[0].value.as < IR::ID* > ()); }
#line 6860 "p4parser.tab.cpp"
    break;

  case 462:
#line 1549 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[1].location + yystack_[0].location, yystack_[1].value.as < IR::Expression* > (), *yystack_[0].value.as < IR::ID* > ()); }
#line 6866 "p4parser.tab.cpp"
    break;

  case 463:
#line 1550 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Mul(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6872 "p4parser.tab.cpp"
    break;

  case 464:
#line 1551 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Div(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6878 "p4parser.tab.cpp"
    break;

  case 465:
#line 1552 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Mod(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6884 "p4parser.tab.cpp"
    break;

  case 466:
#line 1553 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Add(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6890 "p4parser.tab.cpp"
    break;

  case 467:
#line 1554 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Sub(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6896 "p4parser.tab.cpp"
    break;

  case 468:
#line 1555 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::AddSat(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6902 "p4parser.tab.cpp"
    break;

  case 469:
#line 1556 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::SubSat(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6908 "p4parser.tab.cpp"
    break;

  case 470:
#line 1557 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Shl(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6914 "p4parser.tab.cpp"
    break;

  case 471:
#line 1559 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Shr(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6920 "p4parser.tab.cpp"
    break;

  case 472:
#line 1560 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Leq(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6926 "p4parser.tab.cpp"
    break;

  case 473:
#line 1561 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Geq(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6932 "p4parser.tab.cpp"
    break;

  case 474:
#line 1563 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Lss(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6938 "p4parser.tab.cpp"
    break;

  case 475:
#line 1564 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Grt(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6944 "p4parser.tab.cpp"
    break;

  case 476:
#line 1565 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Neq(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6950 "p4parser.tab.cpp"
    break;

  case 477:
#line 1566 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Equ(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6956 "p4parser.tab.cpp"
    break;

  case 478:
#line 1567 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BAnd(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6962 "p4parser.tab.cpp"
    break;

  case 479:
#line 1568 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BXor(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6968 "p4parser.tab.cpp"
    break;

  case 480:
#line 1569 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BOr(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6974 "p4parser.tab.cpp"
    break;

  case 481:
#line 1570 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Concat(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6980 "p4parser.tab.cpp"
    break;

  case 482:
#line 1571 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::LAnd(yystack_[2].location + yystack_[1].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6986 "p4parser.tab.cpp"
    break;

  case 483:
#line 1572 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::LOr(yystack_[2].location + yystack_[1].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6992 "p4parser.tab.cpp"
    break;

  case 484:
#line 1573 "p4parser.ypp"
                                               { yylhs.value.as < IR::Expression* > () = new IR::Mux(yystack_[4].location + yystack_[0].location, yystack_[4].value.as < IR::Expression* > (), yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 6998 "p4parser.tab.cpp"
    break;

  case 485:
#line 1575 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::MethodCallExpression(yystack_[6].location + yystack_[3].location, yystack_[6].value.as < IR::Expression* > (), yystack_[4].value.as < IR::Vector<IR::Type>* > (), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 7004 "p4parser.tab.cpp"
    break;

  case 486:
#line 1577 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::MethodCallExpression(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 7010 "p4parser.tab.cpp"
    break;

  case 487:
#line 1579 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::ConstructorCallExpression(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < ConstType* > (), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 7016 "p4parser.tab.cpp"
    break;

  case 488:
#line 1580 "p4parser.ypp"
                                              { yylhs.value.as < IR::Expression* > () = new IR::Cast(yystack_[3].location + yystack_[0].location, yystack_[2].value.as < ConstType* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7022 "p4parser.tab.cpp"
    break;

  case 489:
#line 1584 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0); }
#line 7028 "p4parser.tab.cpp"
    break;

  case 490:
#line 1585 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 7034 "p4parser.tab.cpp"
    break;

  case 491:
#line 1586 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BoolLiteral(yystack_[0].location, true); }
#line 7040 "p4parser.tab.cpp"
    break;

  case 492:
#line 1587 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::BoolLiteral(yystack_[0].location, false); }
#line 7046 "p4parser.tab.cpp"
    break;

  case 493:
#line 1588 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::This(yystack_[0].location); }
#line 7052 "p4parser.tab.cpp"
    break;

  case 494:
#line 1589 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::PathExpression(yystack_[0].value.as < IR::Path* > ()); }
#line 7058 "p4parser.tab.cpp"
    break;

  case 495:
#line 1590 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::ArrayIndex(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 7064 "p4parser.tab.cpp"
    break;

  case 496:
#line 1591 "p4parser.ypp"
                                                           { yylhs.value.as < IR::Expression* > () = new IR::Slice(yystack_[5].location + yystack_[0].location, yystack_[5].value.as < IR::Expression* > (), yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Expression* > ()); }
#line 7070 "p4parser.tab.cpp"
    break;

  case 497:
#line 1592 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = yystack_[1].value.as < IR::Expression* > (); }
#line 7076 "p4parser.tab.cpp"
    break;

  case 498:
#line 1593 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::LNot(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 7082 "p4parser.tab.cpp"
    break;

  case 499:
#line 1594 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Cmpl(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 7088 "p4parser.tab.cpp"
    break;

  case 500:
#line 1595 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Neg(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 7094 "p4parser.tab.cpp"
    break;

  case 501:
#line 1596 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::UPlus(yystack_[1].location + yystack_[0].location, yystack_[0].value.as < IR::Expression* > ()); }
#line 7100 "p4parser.tab.cpp"
    break;

  case 502:
#line 1598 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[1].location + yystack_[0].location, new IR::TypeNameExpression(yystack_[1].location, yystack_[1].value.as < IR::Type_Name* > ()), *yystack_[0].value.as < IR::ID* > ()); }
#line 7106 "p4parser.tab.cpp"
    break;

  case 503:
#line 1600 "p4parser.ypp"
        { auto typeName = new IR::Type_Name(yystack_[2].location, new IR::Path(IR::ID(yystack_[2].location, "error")));
          yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[2].location+yystack_[0].location, new IR::TypeNameExpression(yystack_[2].location+yystack_[0].location, typeName), *yystack_[0].value.as < IR::ID* > ()); }
#line 7113 "p4parser.tab.cpp"
    break;

  case 504:
#line 1602 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Member(yystack_[1].location + yystack_[0].location, yystack_[1].value.as < IR::Expression* > (), *yystack_[0].value.as < IR::ID* > ()); }
#line 7119 "p4parser.tab.cpp"
    break;

  case 505:
#line 1603 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Mul(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7125 "p4parser.tab.cpp"
    break;

  case 506:
#line 1604 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Div(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7131 "p4parser.tab.cpp"
    break;

  case 507:
#line 1605 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Mod(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7137 "p4parser.tab.cpp"
    break;

  case 508:
#line 1606 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Add(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7143 "p4parser.tab.cpp"
    break;

  case 509:
#line 1607 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Sub(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7149 "p4parser.tab.cpp"
    break;

  case 510:
#line 1608 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::AddSat(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7155 "p4parser.tab.cpp"
    break;

  case 511:
#line 1609 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::SubSat(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7161 "p4parser.tab.cpp"
    break;

  case 512:
#line 1610 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Shl(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7167 "p4parser.tab.cpp"
    break;

  case 513:
#line 1612 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::Shr(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7173 "p4parser.tab.cpp"
    break;

  case 514:
#line 1613 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Leq(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7179 "p4parser.tab.cpp"
    break;

  case 515:
#line 1614 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Geq(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7185 "p4parser.tab.cpp"
    break;

  case 516:
#line 1616 "p4parser.ypp"
                                         { yylhs.value.as < IR::Expression* > () = new IR::Lss(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7191 "p4parser.tab.cpp"
    break;

  case 517:
#line 1617 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Grt(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7197 "p4parser.tab.cpp"
    break;

  case 518:
#line 1618 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Neq(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7203 "p4parser.tab.cpp"
    break;

  case 519:
#line 1619 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Equ(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7209 "p4parser.tab.cpp"
    break;

  case 520:
#line 1620 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::BAnd(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7215 "p4parser.tab.cpp"
    break;

  case 521:
#line 1621 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::BXor(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7221 "p4parser.tab.cpp"
    break;

  case 522:
#line 1622 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::BOr(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7227 "p4parser.tab.cpp"
    break;

  case 523:
#line 1623 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::Concat(yystack_[2].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7233 "p4parser.tab.cpp"
    break;

  case 524:
#line 1624 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::LAnd(yystack_[2].location + yystack_[1].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7239 "p4parser.tab.cpp"
    break;

  case 525:
#line 1625 "p4parser.ypp"
                                                 { yylhs.value.as < IR::Expression* > () = new IR::LOr(yystack_[2].location + yystack_[1].location + yystack_[0].location, yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7245 "p4parser.tab.cpp"
    break;

  case 526:
#line 1626 "p4parser.ypp"
                                                       { yylhs.value.as < IR::Expression* > () = new IR::Mux(yystack_[4].location + yystack_[0].location, yystack_[4].value.as < IR::Expression* > (), yystack_[2].value.as < IR::Expression* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7251 "p4parser.tab.cpp"
    break;

  case 527:
#line 1628 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::MethodCallExpression(yystack_[6].location + yystack_[3].location, yystack_[6].value.as < IR::Expression* > (), yystack_[4].value.as < IR::Vector<IR::Type>* > (), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 7257 "p4parser.tab.cpp"
    break;

  case 528:
#line 1630 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::MethodCallExpression(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < IR::Expression* > (), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 7263 "p4parser.tab.cpp"
    break;

  case 529:
#line 1632 "p4parser.ypp"
        { yylhs.value.as < IR::Expression* > () = new IR::ConstructorCallExpression(yystack_[3].location + yystack_[0].location, yystack_[3].value.as < ConstType* > (), yystack_[1].value.as < IR::Vector<IR::Argument>* > ()); }
#line 7269 "p4parser.tab.cpp"
    break;

  case 530:
#line 1633 "p4parser.ypp"
                                              { yylhs.value.as < IR::Expression* > () = new IR::Cast(yystack_[3].location + yystack_[0].location, yystack_[2].value.as < ConstType* > (), yystack_[0].value.as < IR::Expression* > ()); }
#line 7275 "p4parser.tab.cpp"
    break;

  case 531:
#line 1637 "p4parser.ypp"
                                 { yylhs.value.as < IR::Expression* > () = parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0); }
#line 7281 "p4parser.tab.cpp"
    break;

  case 532:
#line 1638 "p4parser.ypp"
                                 { yylhs.value.as < IR::Expression* > () = new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()); }
#line 7287 "p4parser.tab.cpp"
    break;

  case 533:
#line 1642 "p4parser.ypp"
                                 { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>();
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0));
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[0].location; }
#line 7295 "p4parser.tab.cpp"
    break;

  case 534:
#line 1645 "p4parser.ypp"
                                 { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[2].value.as < IR::Vector<IR::Expression>* > ();
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(parseConstant(yystack_[0].location, yystack_[0].value.as < UnparsedConstant > (), 0));
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 7303 "p4parser.tab.cpp"
    break;

  case 535:
#line 1651 "p4parser.ypp"
                                { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>();
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[0].value.as < IR::Expression* > ());
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[0].location; }
#line 7311 "p4parser.tab.cpp"
    break;

  case 536:
#line 1654 "p4parser.ypp"
                                { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[2].value.as < IR::Vector<IR::Expression>* > ();
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(yystack_[0].value.as < IR::Expression* > ());
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 7319 "p4parser.tab.cpp"
    break;

  case 537:
#line 1660 "p4parser.ypp"
                                 { yylhs.value.as < IR::Vector<IR::Expression>* > () = new IR::Vector<IR::Expression>();
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()));
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[0].location; }
#line 7327 "p4parser.tab.cpp"
    break;

  case 538:
#line 1663 "p4parser.ypp"
                                 { yylhs.value.as < IR::Vector<IR::Expression>* > () = yystack_[2].value.as < IR::Vector<IR::Expression>* > ();
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->push_back(new IR::StringLiteral(yystack_[0].location, yystack_[0].value.as < cstring > ()));
                                   yylhs.value.as < IR::Vector<IR::Expression>* > ()->srcInfo = yystack_[2].location + yystack_[0].location; }
#line 7335 "p4parser.tab.cpp"
    break;


#line 7339 "p4parser.tab.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[+yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yy_error_token_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yy_error_token_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  P4Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  P4Parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    std::ptrdiff_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */
    if (!yyla.empty ())
      {
        symbol_number_type yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];

        int yyn = yypact_[+yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yy_error_token_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short P4Parser::yypact_ninf_ = -962;

  const short P4Parser::yytable_ninf_ = -276;

  const short
  P4Parser::yypact_[] =
  {
    4725,  -962,  2779,  1236,   -42,   -67,    -5,  2779,    20,   -67,
      35,  2779,    68,    80,  2779,   103,   144,   166,   210,   270,
    -962,   282,  2779,  2779,  -962,  2779,  2541,  2326,  2779,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,   239,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,   526,   247,  -962,
     147,  -962,   248,  -962,  4420,  -962,  -962,  -962,   265,   283,
    -962,  -962,   285,  -962,  -962,  -962,   288,  -962,   292,  4420,
    -962,  -962,  -962,  3318,   295,   305,  3356,   309,   314,   318,
    -962,  -962,  -962,  -962,  1236,  -962,   229,   330,   229,   229,
     338,  1236,   229,   229,  -962,   229,   229,  -962,  -962,  -962,
     434,   496,  -962,   327,  -962,   273,  -962,   125,  -962,   157,
    -962,    -7,   337,   323,  -962,  -962,  -962,   352,  -962,  1236,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,   341,  -962,
    -962,  -962,  -962,  -962,   232,   232,   232,   182,   343,   347,
     351,   239,  -962,   355,   177,   193,  3394,   232,  1236,  -962,
    -962,  1225,  -962,  -962,  -962,  -962,  1418,  2779,  2779,  2779,
    2779,  2779,  2779,  2779,  2779,  2779,  2779,  2779,  2779,  2779,
    2779,  2779,  2779,  2779,  2779,  2779,  2779,   359,  1225,  2779,
    2779,  -962,  1331,  2779,  1236,   290,   -67,   298,  2779,   300,
     299,  2779,   303,   307,    16,   216,   -18,  1236,   -15,  1418,
    1236,  -962,  1418,  1418,  1418,   -13,  1236,   470,  1236,  2985,
    1510,  1236,  1236,   470,  1236,  1236,  1236,   496,  -962,  -962,
     375,  -962,    33,  -962,   384,  -962,   385,   386,    -7,  -962,
    1225,  2779,  2779,   229,  -962,   408,   387,  2779,   393,  2779,
    -962,  -962,  -962,   382,   391,   392,  -962,  4420,  1236,  -962,
    -962,  -962,  -962,  -962,   271,  4420,  4634,  4634,  1968,  4568,
    4534,  4602,  4602,   829,   829,   829,   829,   232,   232,   232,
    4666,  2924,  1810,  3204,  4634,  2779,   397,  3432,   829,  -962,
    -962,  -962,  -962,   278,  4634,  -962,  4420,  -962,  -962,  -962,
    -962,  4420,  -962,  -962,  3470,   395,   396,   229,  -962,  -962,
    -962,  2541,  -962,  2779,   280,  -962,    88,  2779,   280,   280,
     398,  2041,   271,   271,   271,  2779,   280,   405,  1236,  -962,
     229,  -962,  1236,   277,   401,   409,   411,  -962,  -962,  -962,
    1236,  -962,  -962,  -962,    40,  1236,  1236,  1225,    53,   415,
     418,  -962,  -962,  -962,  -962,   422,  3508,  3546,  -962,  -962,
    1236,   420,  -962,  -962,   232,  2611,  -962,  1225,  -962,  -962,
    -962,  1418,  -962,  -962,  2779,  1968,  -962,  2779,  1418,   425,
    2779,   358,   364,   365,   430,   351,  2139,  3584,  -962,  -962,
    1236,  3622,  -962,  -962,  1236,   440,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,   439,   441,  -962,
    3660,  -962,    33,   433,   229,   451,  -962,   229,  -962,  -962,
     229,   229,  -962,   229,   229,   229,  -962,  -962,   449,  -962,
    -962,  -962,   470,  -962,    -7,   496,  3026,  -962,  1236,  -962,
    -962,   454,  -962,   296,  -962,   456,  -962,  4420,  -962,  -962,
    3698,  4496,  -962,  1225,  4420,  -962,  -962,   280,  1236,   462,
     463,  -962,   280,  -962,   280,  -962,  2237,  2779,  2779,   280,
     461,  2779,  -962,  1236,   471,  -962,  -962,  -962,  -962,  -962,
    -962,  1236,  1236,  -962,   108,   496,  -962,  -962,    45,  -962,
    -962,     7,  -962,  -962,    -7,   148,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  1936,   319,    33,  1236,  -962,  -962,
    -962,   466,  -962,  -962,  -962,  -962,  -962,  -962,  3736,  3774,
    -962,    -7,   464,   475,   398,  1236,   477,   483,   489,   486,
     490,   503,   321,   457,  1236,   229,   215,  -962,   448,  -962,
     497,   508,  -962,  1236,  -962,  -962,  -962,   499,   510,   517,
    2667,   520,   523,     5,  -962,   221,    90,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,   301,   514,  -962,   524,  -962,  -962,  1236,  1236,
    -962,  -962,    33,   532,   525,   529,  -962,  -962,  -962,  -962,
      33,    33,  -962,   514,  -962,  2779,  -962,   883,   497,  2779,
     522,  -962,   540,  -962,  2985,  2779,  -962,  3812,  2779,  2779,
     519,   530,  2779,  1225,  2779,  -962,  1418,  -962,   533,  -962,
     537,   531,   551,  -962,  2779,  1236,   558,    49,    91,    92,
     555,   560,    94,   557,  4420,   577,   280,   280,   280,   564,
    -962,  -962,    37,   283,  1236,   565,  3850,  -962,  3888,  3926,
     574,   578,  3242,   579,  3964,   271,  -962,  -962,  -962,   587,
    -962,  -962,  -962,  -962,  -962,   633,  -962,  -962,   470,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,   582,   583,   585,  -962,
     580,   581,   562,    23,  -962,   283,  2779,  2946,   595,  2946,
    1225,  1225,  -962,  2779,   586,  -962,   596,   554,   542,   710,
     600,   598,  1236,  2831,  2779,  2779,  2779,   609,   613,  -962,
     200,  -962,  -962,   160,   261,   603,   584,  -962,  -962,   617,
     620,  4002,  -962,  1225,  -962,   496,  -962,  -962,  -962,   589,
     606,    33,  -962,   615,  1367,    42,   496,  -962,  -962,   629,
    1236,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  4040,
    4078,  4116,  -962,  -962,  -962,   621,  -962,  -962,  -962,  -962,
    -962,   623,  2779,  2946,  1082,   619,   624,  -962,   632,   634,
    -962,   641,  -962,   643,   637,  -962,  -962,  -962,  1236,  -962,
    1236,  1236,  1236,   171,  2723,   653,  2779,    63,  -962,  2779,
    2779,  2779,  -962,  2326,  2779,  -962,  -962,  -962,  -962,   642,
    -962,  -962,   649,   147,  -962,   650,  -962,  4458,  -962,  -962,
     644,    33,   646,  2779,  -962,  -962,   651,   656,   661,  -962,
     332,  -962,  -962,  4154,  -962,   662,  2946,   232,   232,   232,
     657,  4192,   232,  1236,  1225,  -962,    28,  2779,  2779,  2779,
    2779,  2779,  2779,  2779,  2779,  2779,  2779,  2779,  2779,  2779,
    2779,  2779,  2779,  2779,  2779,  2779,   663,  1225,  2779,  2779,
    -962,  1331,  -962,   667,  -962,   190,  2892,  -962,  -962,  -962,
     660,   665,   671,  1236,     9,  -962,  -962,  2779,  -962,  -962,
     674,  -962,  4634,  4634,  1968,  4568,  4534,  4602,  4602,   829,
     829,   829,   829,   232,   232,   232,  4666,  2924,  1810,  3280,
    4634,  2779,   676,  4230,   829,   278,  4634,  2946,   684,  -962,
    -962,  1225,    -7,  -962,  1701,  -962,   232,  -962,  -962,  2779,
    1968,  -962,  2779,   683,   689,  -962,   685,   681,  1859,  -962,
    -962,   686,   687,  -962,  -962,  2415,  3162,  4268,  4496,  1225,
     694,  1602,  -962,  -962,   691,   693,   704,   702,  3120,    -9,
     332,   714,  2779,  2779,  -962,   706,  -962,  -962,  -962,   715,
    -962,  2485,  2779,  2779,  2779,   717,    -7,   332,  4420,  4420,
    -962,  1236,   259,  -962,  4306,  4344,  4382,  -962,   716,    -7,
     718,  -962,  2485,   724,  -962,   721,  -962,  -962,  -962,  -962
  };

  const short
  P4Parser::yydefact_[] =
  {
       0,    24,   430,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,    58,     0,     0,   452,     0,   430,     0,     0,   186,
     443,   445,   446,   447,    42,    40,    44,     0,    41,    45,
      46,    43,    39,   276,   444,   442,   433,     0,     0,   278,
     274,   275,     4,   448,   431,    48,    49,    47,     0,     5,
     158,   533,     6,   532,   531,   535,     7,   537,     8,     9,
      10,    11,    12,     0,     0,     0,     0,     0,     0,     0,
       1,     2,    23,    26,     0,   284,   287,   286,   289,     0,
     285,     0,     0,     0,   288,     0,     0,   297,   298,    25,
       0,    59,    60,     0,    33,     0,    30,   184,    32,   184,
      28,    58,   296,   269,   272,   273,   271,   270,   268,     0,
      31,   316,   321,   323,   322,   324,    34,    35,     0,    29,
      38,    37,    27,    36,   459,   458,   457,   276,   433,   226,
     226,   286,   285,     0,   269,   270,     0,   456,     0,   277,
     434,   422,   539,   540,   435,   460,   308,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   422,     0,
       0,   462,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,     0,     0,     0,     0,
       0,    67,   308,   308,   308,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,   286,    61,
       0,   320,    58,   318,     0,   319,     0,     0,    59,   421,
     422,     0,     0,   299,   317,   227,     0,   227,     0,     0,
     455,   461,   428,     0,     0,   423,   424,   426,     0,   307,
     306,   305,   304,   309,     0,   432,   472,   473,   470,   482,
     483,   476,   477,   466,   467,   468,   469,   463,   464,   465,
     480,   478,   479,     0,   475,     0,     0,     0,   481,   313,
     312,   311,   314,     0,   474,   160,   420,   159,   534,   536,
     538,    13,    14,    15,     0,     0,     0,     0,    20,    22,
      19,   430,    67,     0,     0,   346,     0,     0,     0,     0,
     226,     0,     0,     0,     0,     0,     0,     0,     0,   243,
      48,   337,     0,   298,   256,     0,     0,   296,   325,   331,
       0,   171,   194,   328,     0,     0,     0,   422,   170,     0,
     162,   163,   188,   246,   377,     0,     0,     0,   263,   300,
       0,   226,   453,   451,   488,     0,   487,     0,   436,   541,
     542,     0,   283,   449,     0,   471,   486,     0,     0,     0,
       0,     0,     0,     0,   226,   226,     0,     0,   290,   344,
       0,     0,   291,   279,   227,     0,    70,    66,   129,   128,
     123,   124,   125,   127,   126,   131,   133,   132,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    67,   150,   151,   152,   153,   154,
     155,   156,   157,   130,   116,   121,   122,   109,    86,   107,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    87,    88,    89,    90,    91,
      92,    93,   114,   101,    94,    95,    96,    98,    97,    99,
     100,   102,   103,   104,   105,   106,   108,   110,   111,   112,
     113,   115,   117,   118,   119,   120,    69,     0,     0,   280,
       0,   292,    58,     0,   299,     0,   339,   299,   260,   259,
     299,   299,   350,   299,   299,   299,   348,   349,     0,   167,
     169,   168,     0,   185,    58,    58,    58,   379,     0,   281,
     282,     0,   302,     0,   227,     0,   429,   427,   425,   310,
       0,   484,   315,   422,    16,    17,    18,     0,   227,     0,
       0,    63,     0,   347,     0,   345,     0,     0,     0,     0,
       0,     0,   244,     0,     0,   257,   326,   332,   172,   195,
     329,     0,     0,   164,     0,    59,   191,   189,    58,   197,
     193,     0,   192,   190,    58,     0,   251,   247,   250,   249,
     254,   252,   253,   248,    58,     0,    58,     0,   301,   454,
     450,     0,    21,    65,    64,   293,   294,    68,     0,     0,
     295,    58,     0,     0,   226,     0,     0,     0,     0,     0,
       0,     0,     0,   165,     0,     0,     0,   187,     0,   198,
     418,     0,   255,     0,   378,   354,   438,     0,     0,     0,
       0,     0,     0,     0,   391,   269,   270,   367,   372,   375,
     374,   369,   370,   371,   368,   390,   373,   376,   380,   388,
     389,   437,     0,     0,   175,     0,   303,   485,     0,     0,
     412,   417,    58,     0,     0,   226,   341,   261,   334,   334,
      58,    58,   334,     0,   174,     0,   199,     0,   418,     0,
       0,   242,     0,   355,   364,     0,   356,     0,     0,     0,
       0,     0,     0,   422,     0,   439,   308,   178,     0,   264,
       0,     0,     0,   338,     0,   227,     0,    58,    58,    58,
       0,     0,    58,     0,   166,     0,     0,     0,     0,     0,
     419,   415,    58,   362,     0,     0,     0,   357,     0,     0,
       0,     0,     0,     0,     0,     0,   180,   177,   416,     0,
     245,   343,   342,   340,   258,     0,   262,   327,     0,   335,
     333,   173,   196,   330,   176,   201,     0,     0,     0,   414,
       0,     0,    56,    58,   393,   363,   430,    58,     0,    58,
     422,   422,   440,     0,     0,   353,     0,     0,     0,     0,
     276,     0,     0,    58,     0,     0,     0,     0,     0,    57,
       0,   392,   394,     0,     0,     0,   358,   382,   360,     0,
       0,     0,   351,   422,   179,     0,   183,   181,   182,     0,
       0,    58,   265,     0,     0,     0,    59,   202,   208,     0,
       0,   203,   205,   209,   210,   211,   204,   206,   207,     0,
       0,     0,   402,   399,    52,     0,    54,    55,    53,    50,
      51,     0,   430,    58,     0,     0,     0,   441,     0,     0,
     266,     0,   336,     0,     0,   215,   217,   212,     0,   200,
       0,     0,     0,    58,     0,     0,     0,     0,   359,     0,
       0,     0,   381,     0,     0,   491,   492,   493,   386,     0,
     490,   489,     0,   274,   383,     0,   494,   387,   365,   366,
       0,    58,     0,   430,   216,   201,     0,     0,     0,   396,
       0,   395,   400,     0,   410,     0,    58,   501,   500,   499,
       0,     0,   498,     0,   422,   502,   385,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   422,     0,     0,
     504,     0,   352,     0,   267,     0,    58,   241,   240,   239,
       0,     0,   404,     0,    56,   398,   361,     0,   497,   503,
       0,   384,   514,   515,   512,   524,   525,   518,   519,   508,
     509,   510,   511,   505,   506,   507,   522,   520,   521,     0,
     517,     0,     0,     0,   523,     0,   516,    58,     0,   213,
     403,   422,    58,   397,     0,   411,   530,   529,   495,     0,
     513,   528,     0,     0,     0,   219,     0,     0,     0,   238,
     237,    46,     0,   222,   223,     0,   234,     0,   526,   422,
       0,     0,   405,   401,   233,   232,     0,     0,   234,     0,
       0,     0,     0,     0,   496,     0,   413,   218,   220,     0,
     225,     0,     0,     0,     0,     0,    58,     0,   235,   236,
     527,     0,     0,   228,   230,   231,     0,   408,     0,    58,
       0,   224,     0,     0,   407,     0,   221,   229,   409,   406
  };

  const short
  P4Parser::yypgoto_[] =
  {
    -962,  -962,  -962,  -962,  -962,  -962,  -962,   857,  1036,  -962,
    -163,   -11,    -8,   -98,  -283,  -962,   -19,  -167,  -447,  -962,
     284,  -962,  -962,  -962,  -962,  -474,   124,  -962,  -962,  -962,
     680,    44,  -962,  -962,  -962,  -962,  -962,  -962,  -962,   234,
    -962,   -92,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -772,  -962,  -125,  -962,  -962,  -949,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -202,  -962,
    -962,   588,   -40,  -962,   211,  -962,   132,  -962,  1056,   136,
    -962,   -49,  -962,  -962,  -169,  -175,  -962,  -124,  -962,   591,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -407,
    -962,  -962,  -962,  -962,  -962,   111,  -962,  -962,  -186,  -962,
    -757,  -739,  -962,  -962,  -734,  -733,  -729,  -962,  -727,  -714,
    -110,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
      56,  -962,  -962,  -962,  -961,  -962,  -962,  -962,   304,   308,
    -458,   310,   -17,   149,  -519,    51,  -141,  -962,   474,   -20,
    -499,   -48,  -962,  -962,    -2,  -962,     2,  -962,  -962,  -962,
     -32,  -242
  };

  const short
  P4Parser::yydefgoto_[] =
  {
      -1,    18,    19,   300,    20,    21,    99,    46,   243,   831,
     780,   227,   228,   102,   311,   476,    59,    60,   339,   340,
     341,   502,   103,   493,   599,   104,   688,   726,   767,   797,
     224,    47,   106,   505,   557,   107,   494,   600,   558,   559,
     705,   773,   807,   808,   885,   809,   845,   846,  1011,  1028,
    1002,  1003,   236,  1042,  1016,  1004,   560,   108,   109,   484,
     593,   506,   567,   611,   110,   487,   596,   697,   111,   511,
     736,   252,    48,    49,    50,   114,   115,   116,    51,   118,
     119,   348,   349,   513,   253,   254,   282,   283,   120,   121,
     122,   490,   597,   123,   495,   601,   124,   491,   598,   698,
     739,   125,   485,   544,   655,   656,   126,   127,   306,   128,
     627,   628,   629,   630,   631,   632,   633,   715,   634,   635,
     636,   507,   574,   637,   834,   874,   875,   638,   568,   753,
     754,   854,   892,   853,   941,   985,  1005,   944,   129,   130,
     817,   131,   818,   670,   285,   133,   244,   245,   246,    52,
      53,   181,   248,   642,   247,   877,    65,    62,    66,    68,
     182,   362
  };

  const short
  P4Parser::yytable_[] =
  {
      54,   229,   155,   219,   132,    69,   140,   139,   326,    73,
     100,    71,    76,   101,   310,   238,   811,   287,   156,   376,
     134,   135,   592,   136,    54,   146,   147,   312,   313,   314,
     309,   556,   566,   303,   812,   540,   307,   276,   315,   813,
     814,   369,  1034,   786,   815,   788,   816,   562,   571,  1017,
     344,    63,    64,    84,   196,   983,   198,   199,   230,  1036,
     202,   203,   378,   204,   205,   105,   382,   383,   287,   781,
     477,   478,   479,   -58,   481,   641,  1049,    61,    34,    35,
     207,   156,  1043,    84,   779,  -161,    36,   847,    84,   345,
     297,   607,    91,    84,   750,   734,   155,    84,    38,    55,
     624,   304,    39,  1057,   308,    84,   316,    40,   750,    84,
    1035,    41,   156,    67,   751,   896,   639,   207,   157,   858,
     209,   298,    91,    42,    56,   211,   212,    91,   751,   645,
     219,   536,    91,   232,   379,   299,    91,   737,   740,    70,
     743,   499,   500,   380,    91,   105,   216,   681,    91,   501,
     710,    84,    84,    72,    84,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   731,   222,   277,   278,   811,
     284,   286,   946,   207,   223,   385,   291,    74,   289,   294,
      91,    91,   519,    91,   152,   153,   498,   812,    75,   522,
     105,   350,   813,   814,   154,   692,   334,   815,   222,   816,
      80,   338,   604,   700,   701,   157,   225,   889,   206,   832,
     231,   605,    77,   207,   152,   153,   515,   -49,  -274,   346,
     347,    84,   113,  1021,   154,   255,   232,   354,   144,  1029,
     -49,   -49,   978,   105,  -275,   157,   105,   105,   105,   529,
     530,   105,   699,   105,   105,   702,   613,   105,   641,   301,
     641,   105,    78,   994,   231,   373,   337,   302,   152,   153,
      91,   578,   824,   365,   641,   175,   152,   153,   680,   825,
     153,   375,   374,   178,    79,   582,    34,    35,   199,   154,
     585,    81,   586,   796,    36,   826,   148,   590,   151,    54,
     827,   377,    82,   157,   828,   381,    38,    55,   152,   153,
      39,  1051,   113,   480,  1052,    40,   829,   830,   680,    41,
     359,   360,   -39,   183,   -39,   -39,   361,   359,   360,   359,
     360,    42,    56,   368,   641,   876,   -39,   895,   184,    29,
     185,    83,    84,   186,   682,   359,   360,   187,   152,   153,
     189,   577,   683,   517,   841,    85,    86,   594,   154,   684,
     190,   287,   520,    87,   192,   521,   231,   113,   524,   193,
     152,   153,    88,   194,    89,   197,    90,   643,   644,   663,
     664,    91,   581,   200,    92,    93,   221,    94,   230,    29,
     149,   942,    95,   144,    96,   232,    97,   641,    98,    43,
     234,   -47,   235,    34,    35,   105,   237,   239,   275,   288,
     113,    36,   105,   113,   113,   113,   290,   293,   113,   292,
     113,   113,   295,    38,   113,   296,   337,    39,   113,   342,
     343,   344,    40,   352,   933,   542,    41,   641,   545,   353,
     355,   546,   547,   356,   548,   549,   550,   357,    42,   366,
     371,   372,   350,   384,   612,   350,   482,   219,   350,   350,
     -47,   350,   350,   350,   746,   747,   748,   503,   488,   653,
     489,   338,   351,   504,   508,   514,   523,   525,   641,    34,
      35,   650,   526,   766,   527,   528,   535,    36,   563,   573,
     537,   541,   538,   338,   554,   565,   543,   555,   555,    38,
      55,   551,   579,    39,   206,   576,   583,   584,    40,   207,
     208,   725,    41,   591,   209,   665,   595,   210,   647,   211,
     212,   942,   657,   651,    42,    56,   652,    29,   658,   213,
     696,   214,   215,   771,   659,   588,   589,   660,   942,   286,
     216,   661,   723,    85,    86,   217,   105,   608,   662,   105,
     105,   218,   604,    29,   671,   669,    84,   640,   673,   687,
      88,   674,    89,   623,   142,   338,   555,   800,   675,    85,
      86,   678,   113,   667,   679,    94,   689,   218,   693,   113,
      95,   711,    96,   694,   695,   712,    88,    43,    89,   729,
     142,   720,   727,   156,   685,    91,   728,    34,    35,   105,
     794,    94,   721,   730,   733,    36,    95,   741,    96,   112,
     686,    29,   742,    43,    84,   143,   744,    38,   677,   789,
     790,    39,   745,   749,   756,   760,    40,    85,    86,   761,
      41,   764,   768,   774,   775,   218,   776,   779,   777,   778,
     787,   338,    42,   149,    88,   792,    89,   793,   142,   338,
     338,   801,   838,    91,   822,   713,   799,   802,   823,    94,
     681,   839,   833,   704,    95,   840,    96,   286,    97,   835,
      98,    43,   836,   716,   842,   849,   718,   719,   878,   855,
     722,   856,   724,   879,   880,   881,   735,   738,   738,   220,
      29,   738,   286,   882,   883,   755,   884,   219,   894,   903,
     904,   752,   769,   932,   906,   934,    85,    86,   219,   947,
     937,   105,   971,   113,   218,   938,   113,   113,   105,   977,
     939,   945,   981,    88,   980,    89,   987,   142,   991,   995,
     105,    34,    35,   993,  1009,  1010,   783,  1012,    94,    36,
    1013,  1020,   752,    95,  1019,    96,  -238,    97,  -237,    98,
     770,    38,   156,  1026,    54,    39,  1030,  1031,  1040,   795,
      40,   791,   805,   950,    41,   806,   113,    29,  1037,  1041,
     281,  1047,   819,   820,   821,  1054,    42,  1056,  1058,   105,
    1059,   984,   105,    85,    86,   625,   972,   703,   553,   226,
     338,   218,   609,   936,   872,   318,   951,   322,   327,   707,
      88,   330,    89,   708,   142,   335,   732,   975,   336,   782,
     569,   105,   857,   105,   570,    94,   572,   709,   798,     0,
      95,     0,    96,     0,    97,   905,    98,    43,     0,   930,
      54,   518,     0,     0,     0,     0,     0,     0,     0,   105,
     996,   156,   890,     0,     0,   931,     0,     0,     0,     0,
     105,     0,   893,     0,   286,     0,     0,   897,   898,   899,
      57,   901,   902,   935,   169,     0,   170,   171,  1025,     0,
     338,     0,   175,     0,     0,     0,     0,   153,   706,     0,
     178,    54,     0,   138,     0,   113,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,   150,   952,   953,   954,   955,   956,
     957,   958,   959,   960,   961,   962,   963,   964,   965,   966,
     967,   968,   969,   970,     0,   805,   973,   974,   806,   976,
       0,     0,     0,     0,   940,     0,     0,     0,     0,     0,
      29,    57,     0,     0,     0,   986,   113,     0,    57,   113,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     0,     0,     0,   218,     0,     0,     0,   784,   990,
     784,   997,     0,    88,     0,     0,    57,   142,   113,     0,
     113,     0,  1006,     0,   625,     0,     0,  1007,    94,     0,
    1008,     0,     0,    95,     0,    96,  1018,     0,     0,     0,
      43,     0,     0,  1006,     0,    57,   113,     0,   138,  1006,
       0,     0,     0,   251,     0,     0,     0,   113,     0,     0,
    1038,  1039,     0,     0,     0,  1048,     0,     0,     0,  1006,
    1044,  1045,  1046,     0,     0,   138,     0,     0,  1055,    58,
       0,    57,     0,     0,   784,   873,     0,     0,     0,     0,
    1006,     0,     0,     0,    57,     0,   251,    57,     0,   251,
     251,   251,    58,    57,   940,    57,    57,   324,    57,    57,
       0,    57,    57,    57,   144,     0,     0,   117,     0,     0,
       0,   940,     0,   145,     0,     0,     0,   138,     0,     0,
     552,     0,    57,   561,   561,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,   784,     0,     0,
       0,     0,     0,   859,   860,     0,     0,     0,     0,     0,
     195,     0,     0,     0,   861,     0,     0,   201,   862,     0,
       0,     0,     0,   863,     0,   864,     0,     0,     0,    29,
       0,     0,   144,   606,     0,     0,     0,   625,   865,   866,
     867,     0,     0,    34,    35,   233,     0,   117,   138,   868,
       0,    36,   561,   869,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,    57,     0,    39,     0,    57,
       0,     0,    40,     0,   241,     0,    41,    57,   784,     0,
       0,     0,    57,    57,   138,     0,     0,     0,    42,    43,
     870,   871,     0,     0,     0,     0,     0,    57,     0,   144,
       0,     0,   117,     0,   138,     0,     0,     0,   251,     0,
      58,     0,     0,     0,     0,   251,     0,     0,     0,     0,
       0,     0,     0,   305,     0,     0,   305,    57,   145,     0,
       0,    57,   317,     0,   319,   321,   325,   328,   329,     0,
     331,   332,   333,     0,     0,   117,    22,    23,   117,   117,
     117,    24,   714,   117,     0,   117,   117,    25,     0,   117,
      26,    58,     0,   117,     0,     0,    27,     0,    28,     0,
       0,     0,    29,     0,   358,     0,     0,   242,     0,    30,
       0,    31,    32,    33,     0,     0,    34,    35,     0,     0,
       0,     0,     0,     0,    36,     0,    37,    34,    35,     0,
       0,     0,     0,     0,     0,    36,    38,    55,     0,     0,
      39,     0,     0,   327,     0,    40,   772,    38,    55,    41,
       0,    39,     0,     0,     0,     0,    40,    58,     0,     0,
      41,    42,   137,    44,    45,     0,     0,     0,     0,     0,
       0,     0,    42,    56,   483,   112,     0,   327,   486,     0,
       0,   810,    22,    23,     0,    57,   492,    24,     0,     0,
       0,   496,   497,    25,     0,     0,    26,     0,     0,     0,
     138,     0,    27,   220,    28,    57,   512,     0,    29,     0,
       0,     0,     0,   279,   848,    30,     0,    31,    32,    33,
      57,     0,    34,    35,    85,    86,     0,     0,    57,    57,
      36,     0,   141,     0,     0,     0,   533,   117,    57,     0,
     533,    88,    38,    89,   117,   142,    39,     0,     0,     0,
       0,    40,     0,     0,    57,    41,    94,     0,    34,    35,
       0,    95,     0,    96,     0,   280,    36,    42,    43,    44,
      45,   900,    57,     0,     0,     0,     0,     0,    38,    55,
     843,    57,    39,    57,     0,     0,     0,    40,     0,     0,
      57,    41,     0,     0,     0,    29,     0,     0,     0,     0,
     249,     0,     0,    42,    56,     0,     0,     0,     0,    34,
      35,    85,    86,     0,     0,     0,     0,    36,     0,   218,
       0,     0,     0,     0,     0,    57,    57,     0,    88,    38,
      89,     0,   142,    39,     0,     0,     0,     0,    40,   281,
       0,     0,    41,    94,   810,     0,     0,     0,    95,     0,
      96,    57,   250,     0,    42,    43,     0,     0,     0,     0,
     138,     0,     0,   251,   575,     0,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,     0,     0,   117,     0,
       0,   117,   117,     0,    58,     0,     0,    29,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,   305,
       0,    34,    35,    85,    86,     0,   143,   602,   603,    36,
       0,   218,     0,     0,     0,     0,     0,   610,     0,     0,
      88,    38,   320,     0,   142,    39,     0,     0,     0,     0,
      40,   117,     0,   646,    41,    94,     0,   138,   138,     0,
      95,     0,    96,     0,    97,     0,   323,   137,     0,    57,
     626,   654,     0,    22,    23,     0,     0,     0,    24,     0,
     666,     0,   668,     0,    25,     0,     0,    26,  1027,   672,
     138,     0,     0,   998,     0,    28,     0,     0,     0,    29,
       0,    57,     0,     0,   999,     0,    30,    57,    31,    32,
      33,     0,     0,    34,    35,     0,     0,     0,     0,  1000,
       0,    36,     0,    37,   690,   691,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,    39,     0,     0,
       0,     0,    40,     0,     0,    57,    41,    57,    57,    57,
      58,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,    45,     0,     0,     0,     0,     0,     0,     0,     0,
     117,   654,    22,    23,     0,     0,     0,    24,     0,     0,
       0,     0,   117,    25,     0,     0,    26,     0,     0,     0,
      58,     0,   998,     0,    28,     0,     0,     0,    29,     0,
      57,   138,     0,   999,     0,    30,     0,    31,    32,    33,
       0,     0,    34,    35,     0,     0,     0,     0,  1000,     0,
      36,     0,    37,     0,   138,     0,     0,     0,     0,     0,
       0,   117,    38,     0,   117,     0,    39,   150,     0,     0,
      57,  1001,     0,     0,     0,    41,     0,     0,   803,     0,
       0,     0,     0,   785,     0,   785,     0,    42,    43,    44,
      45,     0,     0,   117,     0,   117,     0,     0,     0,   626,
       0,     0,     0,     0,     0,     0,   160,     0,   138,     0,
     844,   165,   166,   167,   168,   169,   610,   170,   171,     0,
     173,   117,     0,   175,     0,     0,     0,     0,   153,     0,
     177,   178,   117,     0,     0,     0,   138,   154,     0,     0,
       0,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   668,     0,   886,   887,   888,   785,
      22,    23,     0,     0,     0,    24,     0,     0,    57,     0,
       0,    25,     0,     0,    26,     0,     0,     0,     0,     0,
      27,     0,    28,     0,     0,     0,    29,     0,     0,   145,
       0,  1014,     0,    30,     0,    31,    32,    33,     0,     0,
      34,    35,    85,    86,     0,     0,  1015,     0,    36,   949,
     141,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      38,    89,   785,   142,    39,     0,     0,     0,     0,    40,
       0,     0,     0,    41,    94,     0,     0,     0,     0,    95,
       0,    96,     0,     0,     0,    42,    43,    44,    45,   982,
       0,     0,   614,     0,     0,     0,     0,   145,     0,     0,
       0,     0,   626,    29,     0,   615,    84,     0,     0,   165,
     166,   167,   168,   169,   616,   170,   171,    34,    35,    85,
      86,   175,     0,     0,     0,    36,   153,   218,   617,   178,
     618,     0,     0,   619,     0,   154,    88,    38,    89,   180,
     142,    39,     0,   785,     0,    91,    40,   620,     0,     0,
      41,    94,     0,   621,     0,     0,    95,     0,    96,     0,
       0,   622,    42,    43,   145,     0,     0,     0,     0,     0,
       0,     0,     0,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,  1050,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,     0,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,     0,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,     0,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,     0,   460,     0,     0,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,     0,   472,   473,   474,
     475,   386,     0,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   531,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,     0,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,     0,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,     0,
     460,     0,     0,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,     0,   472,   473,   474,   475,   386,
       0,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,     0,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   587,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,     0,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,     0,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,     0,   460,     0,
       0,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,     0,   472,   473,   474,   475,    22,    23,     0,
       0,     0,    24,     0,     0,     0,     0,     0,    25,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,    28,
       0,     0,     0,    29,     0,     0,     0,     0,     0,     0,
      30,     0,    31,    32,    33,     0,     0,    34,    35,    85,
      86,     0,     0,     0,     0,    36,     0,   141,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    38,    89,     0,
     142,    39,     0,     0,     0,     0,    40,     0,     0,     0,
      41,    94,     0,     0,     0,     0,    95,     0,    96,     0,
       0,     0,    42,    43,    44,    45,    22,    23,     0,     0,
       0,    24,     0,     0,     0,     0,     0,    25,     0,     0,
      26,     0,     0,     0,     0,     0,   998,     0,    28,     0,
       0,     0,    29,     0,     0,     0,     0,   999,     0,    30,
       0,    31,    32,    33,     0,     0,    34,    35,     0,     0,
       0,     0,  1000,     0,    36,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
      39,     0,     0,     0,     0,    40,    22,    23,     0,    41,
       0,    24,     0,     0,     0,     0,     0,    25,     0,     0,
      26,    42,    43,    44,    45,     0,    27,     0,    28,     0,
       0,     0,    29,     0,     0,     0,     0,   999,     0,    30,
       0,    31,    32,    33,     0,     0,    34,    35,     0,     0,
       0,     0,  1000,     0,    36,     0,    37,     0,     0,     0,
       0,     0,    22,    23,     0,     0,    38,    24,     0,     0,
      39,     0,     0,    25,     0,    40,    26,     0,     0,    41,
       0,     0,    27,     0,    28,     0,     0,     0,    29,     0,
       0,    42,    43,    44,    45,    30,     0,    31,    32,    33,
       0,     0,    34,    35,     0,     0,     0,     0,     0,     0,
      36,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,    55,     0,     0,    39,     0,     0,     0,
       0,    40,    22,    23,     0,    41,     0,    24,     0,     0,
       0,     0,     0,    25,     0,     0,    26,    42,   137,    44,
      45,     0,    27,     0,    28,     0,     0,     0,    29,     0,
       0,     0,     0,   516,     0,    30,     0,    31,    32,    33,
       0,     0,    34,    35,     0,     0,     0,     0,     0,     0,
      36,     0,    37,     0,     0,     0,     0,     0,    22,    23,
       0,     0,    38,    24,     0,     0,    39,     0,     0,    25,
       0,    40,    26,     0,     0,    41,     0,     0,    27,     0,
      28,     0,     0,     0,    29,     0,   676,    42,    43,    44,
      45,    30,     0,    31,    32,    33,     0,     0,    34,    35,
       0,     0,     0,     0,     0,     0,    36,     0,    37,     0,
       0,     0,     0,     0,    22,    23,     0,     0,    38,    24,
       0,     0,    39,     0,     0,    25,     0,    40,    26,   891,
       0,    41,     0,     0,    27,     0,    28,     0,     0,     0,
      29,     0,     0,    42,    43,    44,    45,    30,     0,    31,
      32,    33,     0,     0,    34,    35,     0,     0,     0,     0,
       0,     0,    36,     0,    37,     0,     0,     0,     0,     0,
      22,    23,     0,     0,    38,    24,     0,     0,    39,     0,
       0,    25,     0,    40,    26,     0,     0,    41,     0,     0,
      27,     0,    28,     0,     0,     0,    29,     0,     0,    42,
      43,    44,    45,    30,     0,    31,    32,    33,     0,     0,
      34,    35,     0,     0,     0,     0,     0,     0,    36,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,    39,     0,     0,  -214,     0,    40,
       0,     0,     0,    41,     0,     0,     0,     0,    29,     0,
     615,    84,     0,     0,     0,    42,    43,    44,    45,   616,
       0,     0,    34,    35,    85,    86,     0,     0,     0,     0,
      36,     0,   218,     0,     0,   618,     0,     0,   619,     0,
       0,    88,    38,    89,     0,   142,    39,     0,     0,     0,
      91,    40,     0,     0,     0,    41,    94,     0,   979,     0,
     804,    95,     0,    96,     0,     0,   622,    42,    43,    29,
     160,   615,    84,     0,     0,   165,   166,   167,   168,   169,
     616,   170,   171,    34,    35,    85,    86,   175,     0,     0,
       0,    36,   153,   218,   177,   178,   618,     0,     0,   619,
       0,   154,    88,    38,    89,   180,   142,    39,     0,     0,
       0,    91,    40,     0,     0,     0,    41,    94,     0,     0,
       0,     0,    95,    29,    96,   615,    84,   622,    42,    43,
       0,     0,     0,     0,   616,     0,     0,    34,    35,     0,
       0,     0,     0,     0,     0,    36,     0,     0,   617,     0,
     618,     0,     0,   619,     0,     0,     0,    38,     0,     0,
       0,    39,    29,     0,     0,    91,    40,   620,     0,     0,
      41,     0,     0,   621,     0,     0,    34,    35,    85,    86,
       0,   622,    42,    43,    36,     0,   218,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    38,   320,     0,   142,
      39,     0,     0,    29,     0,    40,    84,     0,     0,    41,
      94,     0,     0,     0,     0,    95,     0,    96,   564,    85,
      86,    42,   137,     0,     0,     0,     0,   218,     0,     0,
       0,     0,     0,     0,     0,     0,    88,     0,    89,     0,
     142,     0,     0,     0,     0,    91,     0,     0,    92,    93,
       0,    94,     0,     0,     0,     0,    95,     0,    96,     0,
       0,     0,     0,    43,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,     0,   170,   171,   172,
     173,   174,     0,   175,     0,     0,     0,   152,   153,   176,
     177,   178,   240,     0,     0,     0,   179,   154,     0,     0,
       0,   180,     0,  1032,     0,  1033,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,   170,
     171,   172,   173,   174,     0,   175,     0,     0,     0,   152,
     153,   176,   177,   178,     0,     0,     0,     0,   179,   154,
       0,     0,     0,   180,     0,  1022,     0,  1023,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
       0,   170,   171,   172,   173,   174,     0,   175,   363,     0,
       0,   152,   153,   176,   177,   178,     0,     0,   364,     0,
     179,   154,     0,     0,     0,   180,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,   170,
     171,   172,   173,   174,     0,   175,   762,     0,     0,   152,
     153,   176,   177,   178,     0,     0,   763,     0,   179,   154,
       0,     0,     0,   180,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,     0,   170,   171,   172,
     173,   174,     0,   175,   988,     0,     0,   152,   153,   176,
     177,   178,     0,     0,   989,     0,   179,   154,     0,     0,
       0,   180,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,     0,   170,   171,   172,   173,   174,
       0,   175,     0,     0,     0,   152,   153,   176,   177,   178,
       0,     0,     0,   188,   179,   154,     0,     0,     0,   180,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,     0,   170,   171,   172,   173,   174,     0,   175,
       0,     0,     0,   152,   153,   176,   177,   178,     0,     0,
       0,   191,   179,   154,     0,     0,     0,   180,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
       0,   170,   171,   172,   173,   174,     0,   175,     0,     0,
       0,   152,   153,   176,   177,   178,   240,     0,     0,     0,
     179,   154,     0,     0,     0,   180,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,   170,
     171,   172,   173,   174,     0,   175,     0,     0,     0,   152,
     153,   176,   177,   178,     0,     0,   367,     0,   179,   154,
       0,     0,     0,   180,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,     0,   170,   171,   172,
     173,   174,     0,   175,     0,     0,     0,   152,   153,   176,
     177,   178,     0,     0,     0,   370,   179,   154,     0,     0,
       0,   180,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,     0,   170,   171,   172,   173,   174,
       0,   175,   509,     0,     0,   152,   153,   176,   177,   178,
       0,     0,     0,     0,   179,   154,     0,     0,     0,   180,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,     0,   170,   171,   172,   173,   174,     0,   175,
     510,     0,     0,   152,   153,   176,   177,   178,     0,     0,
       0,     0,   179,   154,     0,     0,     0,   180,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
       0,   170,   171,   172,   173,   174,     0,   175,     0,     0,
       0,   152,   153,   176,   177,   178,   532,     0,     0,     0,
     179,   154,     0,     0,     0,   180,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,   170,
     171,   172,   173,   174,     0,   175,     0,     0,     0,   152,
     153,   176,   177,   178,   534,     0,     0,     0,   179,   154,
       0,     0,     0,   180,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,     0,   170,   171,   172,
     173,   174,     0,   175,     0,     0,     0,   152,   153,   176,
     177,   178,   539,     0,     0,     0,   179,   154,     0,     0,
       0,   180,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,     0,   170,   171,   172,   173,   174,
       0,   175,   580,     0,     0,   152,   153,   176,   177,   178,
       0,     0,     0,     0,   179,   154,     0,     0,     0,   180,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,     0,   170,   171,   172,   173,   174,     0,   175,
       0,     0,     0,   152,   153,   176,   177,   178,   648,     0,
       0,     0,   179,   154,     0,     0,     0,   180,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
       0,   170,   171,   172,   173,   174,     0,   175,     0,     0,
       0,   152,   153,   176,   177,   178,   649,     0,     0,     0,
     179,   154,     0,     0,     0,   180,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,   170,
     171,   172,   173,   174,     0,   175,     0,     0,     0,   152,
     153,   176,   177,   178,     0,     0,     0,     0,   179,   154,
       0,   717,     0,   180,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,     0,   170,   171,   172,
     173,   174,     0,   175,     0,     0,     0,   152,   153,   176,
     177,   178,   757,     0,     0,     0,   179,   154,     0,     0,
       0,   180,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,     0,   170,   171,   172,   173,   174,
       0,   175,     0,     0,     0,   152,   153,   176,   177,   178,
     758,     0,     0,     0,   179,   154,     0,     0,     0,   180,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,     0,   170,   171,   172,   173,   174,     0,   175,
       0,     0,     0,   152,   153,   176,   177,   178,   759,     0,
       0,     0,   179,   154,     0,     0,     0,   180,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
       0,   170,   171,   172,   173,   174,     0,   175,     0,     0,
       0,   152,   153,   176,   177,   178,     0,     0,     0,     0,
     179,   154,     0,   765,     0,   180,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,   170,
     171,   172,   173,   174,     0,   175,   837,     0,     0,   152,
     153,   176,   177,   178,     0,     0,     0,     0,   179,   154,
       0,     0,     0,   180,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,     0,   170,   171,   172,
     173,   174,     0,   175,     0,     0,     0,   152,   153,   176,
     177,   178,   850,     0,     0,     0,   179,   154,     0,     0,
       0,   180,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,     0,   170,   171,   172,   173,   174,
       0,   175,     0,     0,     0,   152,   153,   176,   177,   178,
     851,     0,     0,     0,   179,   154,     0,     0,     0,   180,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,     0,   170,   171,   172,   173,   174,     0,   175,
       0,     0,     0,   152,   153,   176,   177,   178,   852,     0,
       0,     0,   179,   154,     0,     0,     0,   180,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
       0,   170,   171,   172,   173,   174,     0,   175,     0,     0,
       0,   152,   153,   176,   177,   178,     0,     0,   943,     0,
     179,   154,     0,     0,     0,   180,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,   170,
     171,   172,   173,   174,     0,   175,     0,     0,     0,   152,
     153,   176,   177,   178,   948,     0,     0,     0,   179,   154,
       0,     0,     0,   180,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,     0,   170,   171,   172,
     173,   174,     0,   175,     0,     0,     0,   152,   153,   176,
     177,   178,     0,     0,   992,     0,   179,   154,     0,     0,
       0,   180,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,     0,   170,   171,   172,   173,   174,
       0,   175,  1024,     0,     0,   152,   153,   176,   177,   178,
       0,     0,     0,     0,   179,   154,     0,     0,     0,   180,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,     0,   170,   171,   172,   173,   174,     0,   175,
       0,     0,     0,   152,   153,   176,   177,   178,     0,     0,
       0,  -235,   179,   154,     0,     0,     0,   180,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
       0,   170,   171,   172,   173,   174,     0,   175,     0,     0,
       0,   152,   153,   176,   177,   178,     0,     0,     0,  -236,
     179,   154,     0,     0,     0,   180,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,   170,
     171,   172,   173,   174,     0,   175,     0,     0,     0,   152,
     153,   176,   177,   178,  1053,     0,     0,     0,   179,   154,
       0,     0,     0,   180,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,     0,   170,   171,   172,
     173,   174,     0,   175,     0,     0,     0,   152,   153,   176,
     177,   178,     0,     0,     0,     0,   179,   154,     0,     0,
       0,   180,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,     0,   919,   920,   921,   922,   923,
       0,   924,     0,     0,     0,   152,   153,   925,   926,   927,
       0,     0,     0,     0,   928,   154,     0,     0,     0,   929,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,     0,   170,   171,   172,   173,   174,     0,   175,
       0,     0,     0,   152,   153,   176,   177,   178,     0,     0,
       0,     0,     0,   154,     0,     0,     0,   180,   158,   159,
     160,   161,     0,   163,   164,   165,   166,   167,   168,   169,
       0,   170,   171,   172,   173,   174,     0,   175,     0,     0,
       0,   152,   153,   176,   177,   178,     0,     0,     0,     0,
       0,   154,   158,   159,   160,   180,     0,   163,   164,   165,
     166,   167,   168,   169,     0,   170,   171,   172,   173,   174,
       0,   175,     0,     0,     0,   152,   153,   176,   177,   178,
       0,     0,     0,     0,     0,   154,   158,   159,   160,   180,
       0,     0,     0,   165,   166,   167,   168,   169,     0,   170,
     171,   172,   173,   174,     0,   175,     0,     0,     0,   152,
     153,   176,   177,   178,     0,     0,     0,     0,     0,   154,
     160,     0,     0,   180,     0,   165,   166,   167,   168,   169,
       0,   170,   171,   172,   173,   174,     0,   175,     0,     0,
       0,     0,   153,     0,   177,   178,     0,     0,     0,     0,
       0,   154,   160,     0,     0,   180,     0,   165,   166,   167,
     168,   169,     0,   170,   171,     0,   173,   174,     0,   175,
       0,     0,     0,     0,   153,     0,   177,   178,     0,     0,
       0,     0,     0,   154,     0,     0,     0,   180,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17
  };

  const short
  P4Parser::yycheck_[] =
  {
       2,   111,    50,   101,    21,     7,    26,    26,   210,    11,
      21,     9,    14,    21,   200,   140,   773,   184,    50,   302,
      22,    23,   541,    25,    26,    27,    28,   202,   203,   204,
     199,   505,   506,    51,   773,   482,    51,   178,    51,   773,
     773,   283,    51,   757,   773,   759,   773,   505,   506,   998,
      45,   118,   119,    60,    86,    46,    88,    89,    51,  1020,
      92,    93,   304,    95,    96,    21,   308,   309,   235,    46,
     312,   313,   314,    45,   316,   574,  1037,   119,    71,    72,
      75,   113,  1031,    60,    75,    52,    79,    45,    60,   230,
      74,    46,    99,    60,    71,    46,   144,    60,    91,    92,
     574,   119,    95,  1052,   119,    60,   119,   100,    71,    60,
     119,   104,   144,   118,    91,    52,   574,    75,    55,   833,
      80,   105,    99,   116,   117,    85,    86,    99,    91,   576,
     228,   414,    99,    43,    46,   119,    99,    46,    46,   119,
      46,    88,    89,    55,    99,   101,   106,    57,    99,    96,
     669,    60,    60,   118,    60,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   694,    51,   179,   180,   936,
     182,   183,   896,    75,    59,   310,   188,   119,   186,   191,
      99,    99,   361,    99,    47,    48,   337,   936,   118,   368,
     156,   233,   936,   936,    57,   652,   217,   936,    51,   936,
       0,   222,   104,   660,   661,    55,    59,    46,    70,    59,
      43,   113,   119,    75,    47,    48,   351,    45,    51,   231,
     232,    60,    21,  1005,    57,   237,    43,   239,    27,  1011,
      58,    59,    52,   199,    51,    55,   202,   203,   204,   374,
     375,   207,   659,   209,   210,   662,   108,   213,   757,    43,
     759,   217,   118,   977,    43,   297,    51,    51,    47,    48,
      99,   513,    72,   275,   773,    43,    47,    48,    57,    79,
      48,   301,   301,    51,   118,   527,    71,    72,   320,    57,
     532,    21,   534,   767,    79,    95,    57,   539,    51,   301,
     100,   303,    20,    55,   104,   307,    91,    92,    47,    48,
      95,    52,   101,   315,    55,   100,   116,   117,    57,   104,
      49,    50,    45,    58,    47,    48,    55,    49,    50,    49,
      50,   116,   117,    55,   833,   834,    59,   856,    55,    57,
      55,    59,    60,    55,    43,    49,    50,    55,    47,    48,
      55,    55,    51,   355,   801,    73,    74,   543,    57,    58,
      55,   528,   364,    81,    55,   367,    43,   156,   370,    55,
      47,    48,    90,    55,    92,    45,    94,    58,    59,    58,
      59,    99,   523,    45,   102,   103,    59,   105,    51,    57,
     117,   890,   110,   182,   112,    43,   114,   896,   116,   117,
      59,    58,    55,    71,    72,   361,    55,    52,    49,   119,
     199,    79,   368,   202,   203,   204,   118,   118,   207,   119,
     209,   210,   119,    91,   213,   118,    51,    95,   217,    45,
      45,    45,   100,    46,   881,   484,   104,   936,   487,    46,
      58,   490,   491,    52,   493,   494,   495,    55,   116,    52,
      55,    55,   484,    55,   564,   487,    51,   555,   490,   491,
      59,   493,   494,   495,   706,   707,   708,    52,    59,   594,
      59,   482,    64,    55,    52,    55,    51,   119,   977,    71,
      72,   591,   118,   725,   119,    55,    46,    79,   505,   506,
      51,    58,    51,   504,   505,   506,    45,   505,   506,    91,
      92,    52,    46,    95,    70,    51,    44,    44,   100,    75,
      76,   686,   104,    52,    80,    58,    45,    83,    52,    85,
      86,  1020,    45,    59,   116,   117,    51,    57,    45,    95,
     655,    97,    98,   735,    45,   537,   538,    51,  1037,   541,
     106,    51,   683,    73,    74,   111,   502,   558,    45,   505,
     506,    81,   104,    57,    46,    58,    60,   574,    59,    45,
      90,    51,    92,   574,    94,   576,   574,   769,    51,    73,
      74,    51,   361,   605,    51,   105,    52,    81,    46,   368,
     110,    59,   112,    58,    55,    45,    90,   117,    92,    58,
      94,    72,    59,   625,   642,    99,    59,    71,    72,   555,
      46,   105,    72,    52,    46,    79,   110,    52,   112,    21,
     642,    57,    52,   117,    60,    27,    59,    91,   620,   760,
     761,    95,    45,    59,    59,    51,   100,    73,    74,    51,
     104,    52,    45,    51,    51,    81,    51,    75,    58,    58,
      45,   652,   116,   117,    90,    59,    92,    51,    94,   660,
     661,    51,   793,    99,    45,   674,   114,    59,    45,   105,
      57,    72,    78,   665,   110,    59,   112,   669,   114,    52,
     116,   117,    52,   675,    59,    46,   678,   679,    59,    58,
     682,    58,   684,    59,    52,    51,   697,   698,   699,   101,
      57,   702,   694,    52,    51,   714,    59,   795,    45,    57,
      51,   712,    69,    59,    54,    59,    73,    74,   806,    52,
      59,   667,    49,   502,    81,    59,   505,   506,   674,    52,
      59,    59,    51,    90,    59,    92,    52,    94,    52,    45,
     686,    71,    72,   975,    51,    46,   756,    52,   105,    79,
      59,    54,   753,   110,    58,   112,    55,   114,    55,   116,
     117,    91,   784,    59,   756,    95,    52,    55,    52,   767,
     100,   763,   773,   904,   104,   773,   555,    57,    54,    54,
     182,    54,   774,   775,   776,    59,   116,    59,    54,   735,
      59,   944,   738,    73,    74,   574,   927,   663,   504,   109,
     801,    81,   558,   885,   834,   207,   906,   209,   210,   667,
      90,   213,    92,   667,    94,   217,   695,   931,   217,   753,
     506,   767,   832,   769,   506,   105,   506,   668,   767,    -1,
     110,    -1,   112,    -1,   114,   873,   116,   117,    -1,   877,
     832,   357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   795,
     981,   873,   853,    -1,    -1,   877,    -1,    -1,    -1,    -1,
     806,    -1,   854,    -1,   856,    -1,    -1,   859,   860,   861,
       3,   863,   864,   883,    35,    -1,    37,    38,  1009,    -1,
     881,    -1,    43,    -1,    -1,    -1,    -1,    48,   667,    -1,
      51,   883,    -1,    26,    -1,   674,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   686,    -1,    -1,
      -1,    -1,    -1,    -1,    47,   907,   908,   909,   910,   911,
     912,   913,   914,   915,   916,   917,   918,   919,   920,   921,
     922,   923,   924,   925,    -1,   936,   928,   929,   936,   931,
      -1,    -1,    -1,    -1,   890,    -1,    -1,    -1,    -1,    -1,
      57,    84,    -1,    -1,    -1,   947,   735,    -1,    91,   738,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,   757,   971,
     759,   982,    -1,    90,    -1,    -1,   119,    94,   767,    -1,
     769,    -1,   984,    -1,   773,    -1,    -1,   989,   105,    -1,
     992,    -1,    -1,   110,    -1,   112,   998,    -1,    -1,    -1,
     117,    -1,    -1,  1005,    -1,   148,   795,    -1,   151,  1011,
      -1,    -1,    -1,   156,    -1,    -1,    -1,   806,    -1,    -1,
    1022,  1023,    -1,    -1,    -1,  1036,    -1,    -1,    -1,  1031,
    1032,  1033,  1034,    -1,    -1,   178,    -1,    -1,  1049,     3,
      -1,   184,    -1,    -1,   833,   834,    -1,    -1,    -1,    -1,
    1052,    -1,    -1,    -1,   197,    -1,   199,   200,    -1,   202,
     203,   204,    26,   206,  1020,   208,   209,   210,   211,   212,
      -1,   214,   215,   216,   863,    -1,    -1,    21,    -1,    -1,
      -1,  1037,    -1,    27,    -1,    -1,    -1,   230,    -1,    -1,
     502,    -1,   235,   505,   506,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   248,    -1,   896,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    42,    -1,    -1,    91,    46,    -1,
      -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    57,
      -1,    -1,   931,   555,    -1,    -1,    -1,   936,    66,    67,
      68,    -1,    -1,    71,    72,   119,    -1,   101,   301,    77,
      -1,    79,   574,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,   318,    -1,    95,    -1,   322,
      -1,    -1,   100,    -1,   148,    -1,   104,   330,   977,    -1,
      -1,    -1,   335,   336,   337,    -1,    -1,    -1,   116,   117,
     118,   119,    -1,    -1,    -1,    -1,    -1,   350,    -1,   998,
      -1,    -1,   156,    -1,   357,    -1,    -1,    -1,   361,    -1,
     184,    -1,    -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,    -1,    -1,   200,   380,   182,    -1,
      -1,   384,   206,    -1,   208,   209,   210,   211,   212,    -1,
     214,   215,   216,    -1,    -1,   199,    31,    32,   202,   203,
     204,    36,   674,   207,    -1,   209,   210,    42,    -1,   213,
      45,   235,    -1,   217,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    57,    -1,   248,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    91,    92,    -1,    -1,
      95,    -1,    -1,   735,    -1,   100,   738,    91,    92,   104,
      -1,    95,    -1,    -1,    -1,    -1,   100,   301,    -1,    -1,
     104,   116,   117,   118,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,   318,   767,    -1,   769,   322,    -1,
      -1,   773,    31,    32,    -1,   508,   330,    36,    -1,    -1,
      -1,   335,   336,    42,    -1,    -1,    45,    -1,    -1,    -1,
     523,    -1,    51,   795,    53,   528,   350,    -1,    57,    -1,
      -1,    -1,    -1,    62,   806,    64,    -1,    66,    67,    68,
     543,    -1,    71,    72,    73,    74,    -1,    -1,   551,   552,
      79,    -1,    81,    -1,    -1,    -1,   380,   361,   561,    -1,
     384,    90,    91,    92,   368,    94,    95,    -1,    -1,    -1,
      -1,   100,    -1,    -1,   577,   104,   105,    -1,    71,    72,
      -1,   110,    -1,   112,    -1,   114,    79,   116,   117,   118,
     119,   863,   595,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,   604,    95,   606,    -1,    -1,    -1,   100,    -1,    -1,
     613,   104,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,   116,   117,    -1,    -1,    -1,    -1,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    -1,   648,   649,    -1,    90,    91,
      92,    -1,    94,    95,    -1,    -1,    -1,    -1,   100,   931,
      -1,    -1,   104,   105,   936,    -1,    -1,    -1,   110,    -1,
     112,   674,   114,    -1,   116,   117,    -1,    -1,    -1,    -1,
     683,    -1,    -1,   686,   508,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   695,    -1,    -1,    -1,    -1,    -1,   502,    -1,
      -1,   505,   506,    -1,   528,    -1,    -1,    57,    -1,    -1,
      -1,   714,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   543,
      -1,    71,    72,    73,    74,    -1,   998,   551,   552,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,   561,    -1,    -1,
      90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,
     100,   555,    -1,   577,   104,   105,    -1,   760,   761,    -1,
     110,    -1,   112,    -1,   114,    -1,   116,   117,    -1,   772,
     574,   595,    -1,    31,    32,    -1,    -1,    -1,    36,    -1,
     604,    -1,   606,    -1,    42,    -1,    -1,    45,    46,   613,
     793,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    57,
      -1,   804,    -1,    -1,    62,    -1,    64,   810,    66,    67,
      68,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,   648,   649,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,   100,    -1,    -1,   848,   104,   850,   851,   852,
     674,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     674,   695,    31,    32,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,   686,    42,    -1,    -1,    45,    -1,    -1,    -1,
     714,    -1,    51,    -1,    53,    -1,    -1,    -1,    57,    -1,
     903,   904,    -1,    62,    -1,    64,    -1,    66,    67,    68,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,   927,    -1,    -1,    -1,    -1,    -1,
      -1,   735,    91,    -1,   738,    -1,    95,   940,    -1,    -1,
     943,   100,    -1,    -1,    -1,   104,    -1,    -1,   772,    -1,
      -1,    -1,    -1,   757,    -1,   759,    -1,   116,   117,   118,
     119,    -1,    -1,   767,    -1,   769,    -1,    -1,    -1,   773,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,   981,    -1,
     804,    31,    32,    33,    34,    35,   810,    37,    38,    -1,
      40,   795,    -1,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,   806,    -1,    -1,    -1,  1009,    57,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   848,    -1,   850,   851,   852,   833,
      31,    32,    -1,    -1,    -1,    36,    -1,    -1,  1041,    -1,
      -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,   863,
      -1,    62,    -1,    64,    -1,    66,    67,    68,    -1,    -1,
      71,    72,    73,    74,    -1,    -1,    77,    -1,    79,   903,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,   896,    94,    95,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,   110,
      -1,   112,    -1,    -1,    -1,   116,   117,   118,   119,   943,
      -1,    -1,    46,    -1,    -1,    -1,    -1,   931,    -1,    -1,
      -1,    -1,   936,    57,    -1,    59,    60,    -1,    -1,    31,
      32,    33,    34,    35,    68,    37,    38,    71,    72,    73,
      74,    43,    -1,    -1,    -1,    79,    48,    81,    82,    51,
      84,    -1,    -1,    87,    -1,    57,    90,    91,    92,    61,
      94,    95,    -1,   977,    -1,    99,   100,   101,    -1,    -1,
     104,   105,    -1,   107,    -1,    -1,   110,    -1,   112,    -1,
      -1,   115,   116,   117,   998,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,  1041,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,   101,    -1,    -1,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,   117,   118,
     119,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,   117,   118,   119,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,   101,    -1,
      -1,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,   117,   118,   119,    31,    32,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    -1,
      94,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
     104,   105,    -1,    -1,    -1,    -1,   110,    -1,   112,    -1,
      -1,    -1,   116,   117,   118,   119,    31,    32,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      95,    -1,    -1,    -1,    -1,   100,    31,    32,    -1,   104,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      45,   116,   117,   118,   119,    -1,    51,    -1,    53,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    91,    36,    -1,    -1,
      95,    -1,    -1,    42,    -1,   100,    45,    -1,    -1,   104,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    57,    -1,
      -1,   116,   117,   118,   119,    64,    -1,    66,    67,    68,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    95,    -1,    -1,    -1,
      -1,   100,    31,    32,    -1,   104,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    45,   116,   117,   118,
     119,    -1,    51,    -1,    53,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    68,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    91,    36,    -1,    -1,    95,    -1,    -1,    42,
      -1,   100,    45,    -1,    -1,   104,    -1,    -1,    51,    -1,
      53,    -1,    -1,    -1,    57,    -1,    59,   116,   117,   118,
     119,    64,    -1,    66,    67,    68,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    91,    36,
      -1,    -1,    95,    -1,    -1,    42,    -1,   100,    45,    46,
      -1,   104,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,
      57,    -1,    -1,   116,   117,   118,   119,    64,    -1,    66,
      67,    68,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    91,    36,    -1,    -1,    95,    -1,
      -1,    42,    -1,   100,    45,    -1,    -1,   104,    -1,    -1,
      51,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,   116,
     117,   118,   119,    64,    -1,    66,    67,    68,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    95,    -1,    -1,    46,    -1,   100,
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    57,    -1,
      59,    60,    -1,    -1,    -1,   116,   117,   118,   119,    68,
      -1,    -1,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,
      99,   100,    -1,    -1,    -1,   104,   105,    -1,    46,    -1,
     109,   110,    -1,   112,    -1,    -1,   115,   116,   117,    57,
      26,    59,    60,    -1,    -1,    31,    32,    33,    34,    35,
      68,    37,    38,    71,    72,    73,    74,    43,    -1,    -1,
      -1,    79,    48,    81,    50,    51,    84,    -1,    -1,    87,
      -1,    57,    90,    91,    92,    61,    94,    95,    -1,    -1,
      -1,    99,   100,    -1,    -1,    -1,   104,   105,    -1,    -1,
      -1,    -1,   110,    57,   112,    59,    60,   115,   116,   117,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      84,    -1,    -1,    87,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    95,    57,    -1,    -1,    99,   100,   101,    -1,    -1,
     104,    -1,    -1,   107,    -1,    -1,    71,    72,    73,    74,
      -1,   115,   116,   117,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    -1,    94,
      95,    -1,    -1,    57,    -1,   100,    60,    -1,    -1,   104,
     105,    -1,    -1,    -1,    -1,   110,    -1,   112,    72,    73,
      74,   116,   117,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    92,    -1,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,   102,   103,
      -1,   105,    -1,    -1,    -1,    -1,   110,    -1,   112,    -1,
      -1,    -1,    -1,   117,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    61,    -1,    63,    -1,    65,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    61,    -1,    63,    -1,    65,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      -1,    47,    48,    49,    50,    51,    -1,    -1,    54,    -1,
      56,    57,    -1,    -1,    -1,    61,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    43,    44,    -1,    -1,    47,
      48,    49,    50,    51,    -1,    -1,    54,    -1,    56,    57,
      -1,    -1,    -1,    61,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    -1,    -1,    54,    -1,    56,    57,    -1,    -1,
      -1,    61,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    61,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    61,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    -1,    61,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    -1,    -1,    54,    -1,    56,    57,
      -1,    -1,    -1,    61,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    61,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    61,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    56,    57,    -1,    -1,    -1,    61,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    -1,    61,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    61,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    61,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    61,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    -1,    61,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    -1,    61,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    56,    57,
      -1,    59,    -1,    61,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    61,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    61,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    -1,    61,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      56,    57,    -1,    59,    -1,    61,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    43,    44,    -1,    -1,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    61,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    61,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    61,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    -1,    61,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    -1,    -1,    54,    -1,
      56,    57,    -1,    -1,    -1,    61,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    61,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    -1,    -1,    54,    -1,    56,    57,    -1,    -1,
      -1,    61,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    61,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    61,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    61,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    61,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    61,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    61,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    24,    25,
      26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    57,    24,    25,    26,    61,    -1,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    57,    24,    25,    26,    61,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    57,
      26,    -1,    -1,    61,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    57,    26,    -1,    -1,    61,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    -1,    40,    41,    -1,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    61,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19
  };

  const short
  P4Parser::yystos_[] =
  {
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   123,   124,
     126,   127,    31,    32,    36,    42,    45,    51,    53,    57,
      64,    66,    67,    68,    71,    72,    79,    81,    91,    95,
     100,   104,   116,   117,   118,   119,   129,   153,   194,   195,
     196,   200,   271,   272,   276,    92,   117,   129,   130,   138,
     139,   119,   279,   118,   119,   278,   280,   118,   281,   276,
     119,   278,   118,   276,   119,   118,   276,   119,   118,   118,
       0,    21,    20,    59,    60,    73,    74,    81,    90,    92,
      94,    99,   102,   103,   105,   110,   112,   114,   116,   128,
     133,   134,   135,   144,   147,   153,   154,   157,   179,   180,
     186,   190,   193,   196,   197,   198,   199,   200,   201,   202,
     210,   211,   212,   215,   218,   223,   228,   229,   231,   260,
     261,   263,   264,   267,   276,   276,   276,   117,   129,   138,
     271,    81,    94,   193,   196,   200,   276,   276,    57,   117,
     129,    51,    47,    48,    57,   273,   282,    55,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      37,    38,    39,    40,    41,    43,    49,    50,    51,    56,
      61,   273,   282,    58,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,   130,   282,    45,   282,   282,
      45,   130,   282,   282,   282,   282,    70,    75,    76,    80,
      83,    85,    86,    95,    97,    98,   106,   111,    81,   135,
     193,    59,    51,    59,   152,    59,   152,   133,   134,   242,
      51,    43,    43,   130,    59,    55,   174,    55,   174,    52,
      52,   130,    62,   130,   268,   269,   270,   276,   274,    62,
     114,   129,   193,   206,   207,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,    49,   268,   276,   276,    62,
     114,   193,   208,   209,   276,   266,   276,   139,   119,   278,
     118,   276,   119,   118,   276,   119,   118,    74,   105,   119,
     125,    43,    51,    51,   119,   130,   230,    51,   119,   206,
     230,   136,   207,   207,   207,    51,   119,   130,   193,   130,
      92,   130,   193,   116,   129,   130,   190,   193,   130,   130,
     193,   130,   130,   130,   133,   193,   211,    51,   133,   140,
     141,   142,    45,    45,    45,   268,   276,   276,   203,   204,
     282,    64,    46,    46,   276,    58,    52,    55,   130,    49,
      50,    55,   283,    44,    54,   276,    52,    54,    55,   283,
      55,    55,    55,   282,   138,   271,   136,   276,   283,    46,
      55,   276,   283,   283,    55,   174,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     101,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   116,   117,   118,   119,   137,   283,   283,   283,
     276,   283,    51,   130,   181,   224,   130,   187,    59,    59,
     213,   219,   130,   145,   158,   216,   130,   130,   268,    88,
      89,    96,   143,    52,    55,   155,   183,   243,    52,    44,
      44,   191,   130,   205,    55,   174,    62,   276,   270,   206,
     276,   276,   206,    51,   276,   119,   118,   119,    55,   174,
     174,    52,    52,   130,    52,    46,   136,    51,    51,    52,
     140,    58,   203,    45,   225,   203,   203,   203,   203,   203,
     203,    52,   193,   142,   133,   134,   147,   156,   160,   161,
     178,   193,   262,   264,    72,   133,   147,   184,   250,   260,
     261,   262,   263,   264,   244,   130,    51,    55,   283,    46,
      44,   268,   283,    44,    44,   283,   283,    52,   276,   276,
     283,    52,   266,   182,   230,    45,   188,   214,   220,   146,
     159,   217,   130,   130,   104,   113,   193,    46,   133,   161,
     130,   185,   242,   108,    46,    59,    68,    82,    84,    87,
     101,   107,   115,   133,   147,   196,   200,   232,   233,   234,
     235,   236,   237,   238,   240,   241,   242,   245,   249,   262,
     264,   272,   275,    58,    59,   140,   130,    52,    52,    52,
     242,    59,    51,   174,   130,   226,   227,    45,    45,    45,
      51,    51,    45,    58,    59,    58,   130,   282,   130,    58,
     265,    46,   130,    59,    51,    51,    59,   276,    51,    51,
      57,    57,    43,    51,    58,   273,   282,    45,   148,    52,
     130,   130,   140,    46,    58,    55,   174,   189,   221,   221,
     140,   140,   221,   148,   276,   162,   196,   198,   201,   265,
     266,    59,    45,   138,   193,   239,   276,    59,   276,   276,
      72,    72,   276,   268,   276,   207,   149,    59,    59,    58,
      52,   266,   227,    46,    46,   133,   192,    46,   133,   222,
      46,    52,    52,    46,    59,    45,   283,   283,   283,    59,
      71,    91,   133,   251,   252,   138,    59,    52,    52,    52,
      51,    51,    44,    54,    52,    59,   283,   150,    45,    69,
     117,   190,   193,   163,    51,    51,    51,    58,    58,    75,
     132,    46,   252,   271,   196,   200,   241,    45,   241,   268,
     268,   276,    59,    51,    46,   134,   147,   151,   267,   114,
     190,    51,    59,   130,   109,   133,   134,   164,   165,   167,
     193,   232,   233,   236,   237,   238,   240,   262,   264,   276,
     276,   276,    45,    45,    72,    79,    95,   100,   104,   116,
     117,   131,    59,    78,   246,    52,    52,    44,   268,    72,
      59,   140,    59,    93,   130,   168,   169,    45,   193,    46,
      52,    52,    52,   255,   253,    58,    58,   271,   241,    31,
      32,    42,    46,    51,    53,    66,    67,    68,    77,    81,
     118,   119,   194,   196,   247,   248,   272,   277,    59,    59,
      52,    51,    52,    51,    59,   166,   130,   130,   130,    46,
     133,    46,   254,   276,    45,   266,    52,   276,   276,   276,
     193,   276,   276,    57,    51,   273,    54,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    37,
      38,    39,    40,    41,    43,    49,    50,    51,    56,    61,
     273,   282,    59,   140,    59,   271,   163,    59,    59,    59,
     153,   256,   272,    54,   259,    59,   241,    52,    52,   130,
     268,   242,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,    49,   268,   276,   276,   209,   276,    52,    52,    46,
      59,    51,   130,    46,   132,   257,   276,    52,    44,    54,
     276,    52,    54,   283,   241,    45,   268,   133,    51,    62,
      77,   100,   172,   173,   177,   258,   276,   276,   276,    51,
      46,   170,    52,    59,    62,    77,   176,   177,   276,    58,
      54,   172,    63,    65,    44,   268,    59,    46,   171,   172,
      52,    55,    63,    65,    51,   119,   256,    54,   276,   276,
      52,    54,   175,   177,   276,   276,   276,    54,   133,   256,
     130,    52,    55,    52,    59,   133,    59,   177,    54,    59
  };

  const short
  P4Parser::yyr1_[] =
  {
       0,   122,   123,   123,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     125,   125,   125,   126,   127,   127,   127,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   130,   130,   130,
     131,   131,   131,   131,   131,   131,   132,   132,   133,   133,
     134,   134,   135,   135,   135,   135,   135,   136,   136,   136,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   138,   138,
     139,   140,   140,   141,   141,   142,   142,   143,   143,   143,
     143,   145,   146,   144,   147,   147,   147,   147,   149,   148,
     150,   150,   151,   151,   152,   152,   153,   154,   155,   155,
     156,   156,   156,   156,   158,   159,   157,   160,   160,   162,
     161,   163,   163,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   166,   165,   167,   167,   168,   168,   169,   170,
     170,   171,   172,   172,   173,   173,   174,   174,   175,   175,
     176,   176,   176,   176,   177,   177,   177,   177,   177,   178,
     178,   178,   179,   181,   182,   180,   183,   183,   184,   184,
     184,   184,   184,   184,   184,   185,   187,   188,   186,   186,
     186,   189,   189,   191,   190,   192,   192,   192,   193,   193,
     193,   193,   193,   193,   194,   194,   195,   195,   196,   197,
     198,   199,   199,   200,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   202,   202,   202,   203,
     203,   204,   205,   205,   206,   206,   206,   206,   207,   207,
     207,   208,   208,   208,   209,   209,   210,   210,   210,   210,
     210,   211,   211,   211,   211,   213,   214,   212,   216,   217,
     215,   219,   220,   218,   221,   221,   222,   224,   223,   225,
     223,   226,   226,   227,   228,   229,   230,   230,   231,   231,
     231,   232,   232,   232,   233,   234,   235,   235,   236,   236,
     237,   238,   239,   239,   239,   240,   240,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   243,   242,   244,
     244,   245,   246,   246,   247,   247,   248,   248,   249,   249,
     249,   249,   250,   251,   251,   252,   252,   252,   252,   253,
     253,   254,   255,   255,   256,   256,   257,   257,   258,   258,
     259,   259,   260,   261,   262,   262,   263,   264,   265,   265,
     266,   267,   268,   268,   269,   269,   270,   270,   270,   270,
     271,   271,   271,   272,   272,   274,   273,   275,   275,   275,
     275,   275,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   278,   278,   279,   279,   280,   280,   281,   281,   282,
     282,   283,   283
  };

  const signed char
  P4Parser::yyr2_[] =
  {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     4,     4,     6,     6,     6,     4,
       1,     4,     1,     2,     0,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     1,
       1,     2,     2,     5,     6,     6,     4,     0,     4,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     0,     1,     1,     3,     4,     6,     1,     1,     1,
       0,     0,     0,     9,     7,     6,     9,     8,     0,     4,
       0,     2,     1,     1,     0,     3,     1,     6,     0,     2,
       1,     1,     1,     1,     0,     0,     9,     1,     2,     0,
       8,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     0,     2,     2,     1,     7,     0,
       2,     4,     1,     1,     5,     3,     0,     1,     1,     3,
       3,     3,     1,     1,     1,     3,     3,     1,     1,    10,
      10,    10,     7,     0,     0,     9,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     0,     9,     4,
       4,     0,     2,     0,     7,     3,     4,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     4,
       4,     4,     4,     4,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     6,     6,     6,     1,     1,     1,     0,
       1,     3,     1,     3,     1,     1,     1,     1,     0,     1,
       3,     1,     1,     1,     1,     3,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     0,     0,     9,     0,     0,
       9,     0,     0,     9,     0,     2,     4,     0,     8,     0,
       9,     1,     3,     3,     4,     5,     1,     3,     4,     4,
       4,     5,     8,     4,     1,     2,     2,     3,     5,     7,
       5,     9,     1,     2,     0,     7,     7,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     5,     0,
       2,     7,     0,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     6,     1,     2,     5,     5,     7,     6,     0,
       2,     5,     0,     4,     1,     4,     7,     6,     4,     6,
       0,     2,     7,    18,     5,     4,     9,     7,     0,     2,
       1,     2,     0,     1,     1,     3,     1,     3,     1,     3,
       0,     1,     3,     1,     2,     0,     3,     1,     1,     2,
       4,     6,     1,     1,     1,     1,     1,     1,     1,     4,
       6,     4,     1,     4,     6,     3,     2,     2,     2,     2,
       2,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     7,     4,     4,     4,     1,
       1,     1,     1,     1,     1,     4,     6,     3,     2,     2,
       2,     2,     2,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     7,     4,     4,
       4,     1,     1,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const P4Parser::yytname_[] =
  {
  "$end", "error", "$undefined", "START_PROGRAM", "START_EXPRESSION_LIST",
  "START_KV_LIST", "START_INTEGER_LIST",
  "START_INTEGER_OR_STRING_LITERAL_LIST", "START_STRING_LITERAL_LIST",
  "START_EXPRESSION", "START_INTEGER", "START_INTEGER_OR_STRING_LITERAL",
  "START_STRING_LITERAL", "START_EXPRESSION_PAIR", "START_INTEGER_PAIR",
  "START_STRING_LITERAL_PAIR", "START_EXPRESSION_TRIPLE",
  "START_INTEGER_TRIPLE", "START_STRING_LITERAL_TRIPLE",
  "START_P4RT_TRANSLATION_ANNOTATION", "END", "END_ANNOTATION",
  "UNEXPECTED_TOKEN", "END_PRAGMA", "\"<=\"", "\">=\"", "\"<<\"", "\"&&\"",
  "\"||\"", "\"!=\"", "\"==\"", "\"+\"", "\"-\"", "\"|+|\"", "\"|-|\"",
  "\"*\"", "\"{#}\"", "\"/\"", "\"%\"", "\"|\"", "\"&\"", "\"^\"", "\"~\"",
  "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"<\"", "L_ANGLE_ARGS", "\">\"",
  "R_ANGLE_SHIFT", "\"(\"", "\")\"", "\"!\"", "\":\"", "\",\"", "\"?\"",
  "\".\"", "\"=\"", "\";\"", "\"@\"", "\"++\"", "\"_\"", "\"&&&\"",
  "\"...\"", "\"..\"", "TRUE", "FALSE", "THIS", "ABSTRACT", "ACTION",
  "ACTIONS", "APPLY", "BOOL", "BIT", "CONST", "CONTROL", "DEFAULT", "ELSE",
  "ENTRIES", "ENUM", "ERROR", "EXIT", "EXTERN", "FOR", "HEADER",
  "HEADER_UNION", "IF", "IN", "INOUT", "INT", "KEY", "LIST", "SELECT",
  "MATCH_KIND", "TYPE", "OUT", "PACKAGE", "PARSER", "PRAGMA", "PRIORITY",
  "RETURN", "REGISTER", "REGACTION", "STATE", "STRING", "STRUCT", "SWITCH",
  "TABLE", "TRANSITION", "TUPLE", "TYPEDEF", "VARBIT", "VALUESET", "VOID",
  "WHILE", "IDENTIFIER", "TYPE_IDENTIFIER", "STRING_LITERAL", "INTEGER",
  "PREFIX", "THEN", "$accept", "start", "fragment", "p4rtControllerType",
  "program", "input", "declaration", "nonTypeName", "name",
  "nonTableKwName", "optCONST", "optAnnotations", "annotations",
  "annotation", "annotationBody", "annotationToken", "kvList", "kvPair",
  "parameterList", "nonEmptyParameterList", "parameter", "direction",
  "packageTypeDeclaration", "$@1", "$@2", "instantiation",
  "objInitializer", "$@3", "objDeclarations", "objDeclaration",
  "optConstructorParameters", "dotPrefix", "parserDeclaration",
  "parserLocalElements", "parserLocalElement", "parserTypeDeclaration",
  "$@4", "$@5", "parserStates", "parserState", "$@6", "parserStatements",
  "parserStatement", "parserBlockStatement", "$@7", "transitionStatement",
  "stateExpression", "selectExpression", "selectCaseList", "selectCase",
  "keysetExpression", "tupleKeysetExpression", "optTrailingComma",
  "simpleExpressionList", "reducedSimpleKeysetExpression",
  "simpleKeysetExpression", "valueSetDeclaration", "controlDeclaration",
  "controlTypeDeclaration", "$@8", "$@9", "controlLocalDeclarations",
  "controlLocalDeclaration", "controlBody", "externDeclaration", "$@10",
  "$@11", "methodPrototypes", "functionPrototype", "$@12",
  "methodPrototype", "typeRef", "namedType", "prefixedType", "typeName",
  "p4listType", "tupleType", "headerStackType", "specializedType",
  "baseType", "typeOrVoid", "optTypeParameters", "typeParameters",
  "typeParameterList", "typeArg", "typeArgumentList", "realTypeArg",
  "realTypeArgumentList", "typeDeclaration", "derivedTypeDeclaration",
  "headerTypeDeclaration", "$@13", "$@14", "structTypeDeclaration", "$@15",
  "$@16", "headerUnionDeclaration", "$@17", "$@18", "structFieldList",
  "structField", "enumDeclaration", "$@19", "$@20",
  "specifiedIdentifierList", "specifiedIdentifier", "errorDeclaration",
  "matchKindDeclaration", "identifierList", "typedefDeclaration",
  "assignmentOrMethodCallStatement", "emptyStatement", "exitStatement",
  "returnStatement", "conditionalStatement", "whileStatement",
  "forStatement", "forInitializer", "directApplication", "statement",
  "blockStatement", "$@21", "statOrDeclList", "switchStatement",
  "switchCases", "switchCase", "switchLabel", "statementOrDeclaration",
  "tableDeclaration", "tablePropertyList", "tableProperty",
  "keyElementList", "keyElement", "actionList", "actionRef", "entry",
  "entryPriority", "entriesList", "actionDeclaration",
  "registerActionDeclaration", "variableDeclaration",
  "registerDeclaration", "constantDeclaration", "optInitializer",
  "initializer", "functionDeclaration", "argumentList", "nonEmptyArgList",
  "argument", "expressionList", "prefixedNonTypeName", "dot_name", "$@22",
  "lvalue", "expression", "nonBraceExpression", "intOrStr", "intList",
  "intOrStrList", "strList", "l_angle", "r_angle", YY_NULLPTR
  };

#if YYDEBUG
  const short
  P4Parser::yyrline_[] =
  {
       0,   362,   362,   363,   368,   369,   370,   371,   372,   375,
     376,   377,   378,   381,   387,   393,   401,   408,   415,   425,
     438,   440,   443,   447,   450,   451,   452,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   471,
     472,   473,   474,   475,   476,   477,   478,   482,   483,   484,
     488,   489,   490,   491,   492,   493,   497,   498,   502,   503,
     507,   513,   522,   527,   529,   531,   535,   540,   541,   548,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   604,   605,   606,
     607,   609,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   620,   621,   622,   623,   624,   625,   626,   628,   629,
     630,   631,   638,   639,   640,   641,   642,   643,   644,   645,
     647,   648,   649,   650,   651,   652,   653,   654,   658,   659,
     663,   667,   668,   672,   674,   678,   679,   683,   684,   685,
     686,   690,   691,   690,   701,   705,   708,   712,   718,   718,
     724,   725,   729,   730,   734,   735,   739,   745,   754,   755,
     759,   760,   761,   762,   767,   768,   766,   776,   778,   782,
     782,   789,   790,   794,   795,   796,   797,   798,   799,   800,
     801,   802,   806,   806,   811,   812,   816,   817,   821,   827,
     828,   832,   838,   839,   843,   845,   849,   850,   854,   855,
     860,   861,   862,   863,   867,   868,   869,   870,   871,   875,
     878,   881,   889,   898,   899,   897,   907,   908,   912,   913,
     914,   915,   916,   917,   918,   922,   929,   930,   928,   934,
     938,   946,   947,   952,   951,   964,   967,   971,   980,   981,
     982,   983,   984,   985,   989,   990,   994,   995,  1000,  1004,
    1008,  1012,  1013,  1017,  1021,  1022,  1023,  1024,  1025,  1026,
    1027,  1029,  1031,  1034,  1036,  1038,  1043,  1044,  1045,  1050,
    1051,  1055,  1059,  1061,  1065,  1066,  1068,  1069,  1073,  1074,
    1075,  1079,  1080,  1081,  1087,  1088,  1092,  1093,  1094,  1095,
    1096,  1100,  1101,  1102,  1103,  1107,  1107,  1107,  1115,  1115,
    1115,  1123,  1123,  1123,  1131,  1132,  1136,  1141,  1140,  1143,
    1143,  1151,  1153,  1157,  1161,  1166,  1171,  1173,  1178,  1180,
    1182,  1190,  1195,  1200,  1206,  1210,  1214,  1215,  1219,  1221,
    1226,  1231,  1236,  1240,  1244,  1254,  1259,  1267,  1268,  1269,
    1270,  1271,  1272,  1273,  1274,  1275,  1276,  1280,  1280,  1286,
    1287,  1291,  1296,  1297,  1301,  1302,  1306,  1307,  1311,  1312,
    1313,  1318,  1324,  1330,  1332,  1336,  1340,  1344,  1348,  1355,
    1356,  1360,  1366,  1367,  1372,  1374,  1379,  1390,  1404,  1405,
    1409,  1410,  1416,  1423,  1435,  1439,  1445,  1452,  1458,  1459,
    1463,  1469,  1475,  1476,  1480,  1482,  1486,  1487,  1488,  1489,
    1493,  1494,  1496,  1500,  1501,  1506,  1506,  1511,  1512,  1513,
    1514,  1515,  1519,  1520,  1521,  1522,  1523,  1524,  1525,  1526,
    1527,  1528,  1529,  1530,  1532,  1539,  1540,  1541,  1542,  1543,
    1544,  1546,  1549,  1550,  1551,  1552,  1553,  1554,  1555,  1556,
    1557,  1558,  1560,  1561,  1562,  1564,  1565,  1566,  1567,  1568,
    1569,  1570,  1571,  1572,  1573,  1574,  1576,  1578,  1580,  1584,
    1585,  1586,  1587,  1588,  1589,  1590,  1591,  1592,  1593,  1594,
    1595,  1596,  1597,  1599,  1602,  1603,  1604,  1605,  1606,  1607,
    1608,  1609,  1610,  1611,  1613,  1614,  1615,  1617,  1618,  1619,
    1620,  1621,  1622,  1623,  1624,  1625,  1626,  1627,  1629,  1631,
    1633,  1637,  1638,  1642,  1645,  1651,  1654,  1660,  1663,  1668,
    1668,  1669,  1669
  };

  // Print the state stack on the debug stream.
  void
  P4Parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  P4Parser::yy_reduce_print_ (int yyrule)
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 23 "p4parser.ypp"
} // P4
#line 9237 "p4parser.tab.cpp"

#line 1673 "p4parser.ypp"


void P4::P4Parser::error(const Util::SourceInfo& location,
                         const std::string& message) {
    driver.onParseError(location, message);
}
