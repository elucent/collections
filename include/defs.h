#ifndef BASIL_DEFS_H
#define BASIL_DEFS_H

#include <cstdint>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

// hash.h

template<typename T>
class set;

template<typename K, typename V>
class map;

// io.h

class stream;
class file;
class buffer;

// slice.h

template<typename T, typename U>
struct pair;

template<typename T>
class const_slice;

template<typename T>
class slice;

// str.h

class string;

// utf8.h

struct uchar;
class ustring;

// vec.h

template<typename T>
class vector;

namespace basil {
    // source.h

    class Source;

    // lex.h
    
    struct Token;
    class TokenView;

    // parse.h

    class Term;
    class BlockTerm;
    class IntTerm;
    class FloatTerm;
    class StringTerm;
    class CharTerm;
    class VariableTerm;

    // type.h

    class Type;
    class NumberType;
    class ArrayType;
    class SumType;
    class ProductType;
    class IntersectType;
    class NamedType;

    // env.h

    struct Entry;
    class Env;

    // ast.h

    class Node;
    class Int;
    class Float;
    class String;
    class Char;
    class Boolean;
    class Quote;
    using Builtin = Node*(*)(Env*, Node*, const BlockTerm*);

     // meta.h
   
    class Meta;
    class MetaRC;
    class MetaString;
    class MetaArray;
    class MetaUnion;
    class MetaIntersect;
    class MetaFunction;

    // error.h
    
    struct Error;
}

#endif