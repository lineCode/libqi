#pragma once
/*
*  Author(s):
*  - Chris  Kilner <ckilner@aldebaran-robotics.com>
*  - Cedric Gestes <gestes@aldebaran-robotics.com>
*
*  Copyright (C) 2010 Aldebaran Robotics
*/

#ifndef _QI_FUNCTORS_MAKEFUNCTOR_HPP_
#define _QI_FUNCTORS_MAKEFUNCTOR_HPP_

#include <qi/functors/functor.hpp>

namespace qi
{

  template <typename C, typename R>
  Functor *makeFunctor(C *obj, R (C::*f) ()) {
    return new detail::MemberFunctor_0<C, R>(obj, f);
  }

  template <typename R>
  Functor *makeFunctor(R (*f) ()) {
    return new detail::Functor_0<R>(f);
  }


  template <typename P0, typename C, typename R>
  Functor *makeFunctor(C *obj, R (C::*f) (const P0 &p0)) {
    return new detail::MemberFunctor_1<P0, C, R>(obj, f);
  }

  template <typename P0, typename R>
  Functor *makeFunctor(R (*f) (const P0 &p0)) {
    return new detail::Functor_1<P0, R>(f);
  }


  template <typename P0, typename P1, typename C, typename R>
  Functor *makeFunctor(C *obj, R (C::*f) (const P0 &p0, const P1 &p1)) {
    return new detail::MemberFunctor_2<P0, P1, C, R>(obj, f);
  }

  template <typename P0, typename P1, typename R>
  Functor *makeFunctor(R (*f) (const P0 &p0, const P1 &p1)) {
    return new detail::Functor_2<P0, P1, R>(f);
  }


  template <typename P0, typename P1, typename P2, typename C, typename R>
  Functor *makeFunctor(C *obj, R (C::*f) (const P0 &p0, const P1 &p1, const P2 &p2)) {
    return new detail::MemberFunctor_3<P0, P1, P2, C, R>(obj, f);
  }

  template <typename P0, typename P1, typename P2, typename R>
  Functor *makeFunctor(R (*f) (const P0 &p0, const P1 &p1, const P2 &p2)) {
    return new detail::Functor_3<P0, P1, P2, R>(f);
  }


  template <typename P0, typename P1, typename P2, typename P3, typename C, typename R>
  Functor *makeFunctor(C *obj, R (C::*f) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3)) {
    return new detail::MemberFunctor_4<P0, P1, P2, P3, C, R>(obj, f);
  }

  template <typename P0, typename P1, typename P2, typename P3, typename R>
  Functor *makeFunctor(R (*f) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3)) {
    return new detail::Functor_4<P0, P1, P2, P3, R>(f);
  }


  template <typename P0, typename P1, typename P2, typename P3, typename P4, typename C, typename R>
  Functor *makeFunctor(C *obj, R (C::*f) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4)) {
    return new detail::MemberFunctor_5<P0, P1, P2, P3, P4, C, R>(obj, f);
  }

  template <typename P0, typename P1, typename P2, typename P3, typename P4, typename R>
  Functor *makeFunctor(R (*f) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4)) {
    return new detail::Functor_5<P0, P1, P2, P3, P4, R>(f);
  }


  template <typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename C, typename R>
  Functor *makeFunctor(C *obj, R (C::*f) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5)) {
    return new detail::MemberFunctor_6<P0, P1, P2, P3, P4, P5, C, R>(obj, f);
  }

  template <typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename R>
  Functor *makeFunctor(R (*f) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5)) {
    return new detail::Functor_6<P0, P1, P2, P3, P4, P5, R>(f);
  }


  template <typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename C, typename R>
  Functor *makeFunctor(C *obj, R (C::*f) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6)) {
    return new detail::MemberFunctor_7<P0, P1, P2, P3, P4, P5, P6, C, R>(obj, f);
  }

  template <typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename R>
  Functor *makeFunctor(R (*f) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6)) {
    return new detail::Functor_7<P0, P1, P2, P3, P4, P5, P6, R>(f);
  }


  template <typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename C, typename R>
  Functor *makeFunctor(C *obj, R (C::*f) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7)) {
    return new detail::MemberFunctor_8<P0, P1, P2, P3, P4, P5, P6, P7, C, R>(obj, f);
  }

  template <typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename R>
  Functor *makeFunctor(R (*f) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7)) {
    return new detail::Functor_8<P0, P1, P2, P3, P4, P5, P6, P7, R>(f);
  }


  template <typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename C, typename R>
  Functor *makeFunctor(C *obj, R (C::*f) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, const P8 &p8)) {
    return new detail::MemberFunctor_9<P0, P1, P2, P3, P4, P5, P6, P7, P8, C, R>(obj, f);
  }

  template <typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename R>
  Functor *makeFunctor(R (*f) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, const P8 &p8)) {
    return new detail::Functor_9<P0, P1, P2, P3, P4, P5, P6, P7, P8, R>(f);
  }

}
#endif  // _QI_FUNCTORS_MAKEFUNCTOR_HPP_
