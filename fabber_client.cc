/*  FABBER - Fast ASL and BOLD Bayesian Estimation Routine

    Michael Chappell, FMRIB Image Analysis & IBME QuBIc Groups

    Copyright (C) 2007-2015 University of Oxford  */

/*  CCOPYRIGHT */

#include "fabber_core/fabber_core.h"

#include "fwdmodel_cest.h"

int main(int argc, char **argv)
{
    // Add the CEST models - these will autoregister at this point
    CESTFwdModel::NewInstance();

    return execute(argc, argv);
}
