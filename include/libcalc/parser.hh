// -*- mode: c++; -*-
// Copyright 2022- Thinkoid, LLC

#ifndef LIBCALC_PARSER_HH
#define LIBCALC_PARSER_HH

#include <libcalc/detail/defs.hh>

namespace calc {

template< typename Iterator >
bool parse(Iterator, Iterator &, Iterator, expr_t &);

} // namespace calc

#include <libcalc/parser.cc>

#endif // LIBCALC_PARSER_HH
