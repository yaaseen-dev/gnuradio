/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/filter/mmse_interp_differentiator_ff.h>
// pydoc.h is automatically generated in the build directory
#include <mmse_interp_differentiator_ff_pydoc.h>

void bind_mmse_interp_differentiator_ff(py::module& m)
{

    using mmse_interp_differentiator_ff = ::gr::filter::mmse_interp_differentiator_ff;


    py::class_<mmse_interp_differentiator_ff,
               std::shared_ptr<mmse_interp_differentiator_ff>>(
        m, "mmse_interp_differentiator_ff", D(mmse_interp_differentiator_ff))

        .def(py::init<>(),
             D(mmse_interp_differentiator_ff, mmse_interp_differentiator_ff, 0))
        .def(py::init<gr::filter::mmse_interp_differentiator_ff const&>(),
             py::arg("arg0"),
             D(mmse_interp_differentiator_ff, mmse_interp_differentiator_ff, 1))


        .def("ntaps",
             &mmse_interp_differentiator_ff::ntaps,
             D(mmse_interp_differentiator_ff, ntaps))


        .def("nsteps",
             &mmse_interp_differentiator_ff::nsteps,
             D(mmse_interp_differentiator_ff, nsteps))


        .def("differentiate",
             &mmse_interp_differentiator_ff::differentiate,
             py::arg("input"),
             py::arg("mu"),
             D(mmse_interp_differentiator_ff, differentiate))

        ;


    py::module m_kernel = m.def_submodule("kernel");
}