/**********************************************
 * Self-Driving Car Nano-degree - Udacity
 *  Created on: December 11, 2020
 *      Author: Mathilde Badoual
 **********************************************/

#include "pid_controller.h"
#include <vector>
#include <iostream>
#include <math.h>

#include <boost/algorithm/clamp.hpp>

using namespace std;

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kpi, double Kii, double Kdi, double output_lim_maxi, double output_lim_mini) {
   /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   **/
   tau_p_ = Kpi;
   tau_i_ = Kii;
   tau_d_ = Kdi;
  
   out_lim_max_ = output_lim_maxi;
   out_lim_min_ = output_lim_mini;
  
   tot_err_ = prev_err_ = diff_err_ = 0.0;
   dt_ = 0.0;
}


void PID::UpdateError(double cte) {
   /**
   * TODO: Update PID errors based on cte.
   **/
   if(dt_ < 1e-8) {
      //drop d term if dt too small.
      diff_err_ = 0.0;
   } else {
      diff_err_ = (cte - prev_err_) / dt_;
   }
  
   tot_err_ += cte * dt_;
   prev_err_ = cte;
}

double PID::TotalError() {
   /**
   * TODO: Calculate and return the total error
    * The code should return a value in the interval [output_lim_mini, output_lim_maxi]
   */
    double control = tau_p_ * prev_err_ + tau_i_ * tot_err_ + tau_d_ * diff_err_;
    return boost::algorithm::clamp(control, out_lim_min_, out_lim_max_);
}

double PID::UpdateDeltaTime(double new_delta_time) {
   /**
   * TODO: Update the delta time with new value
   */
   double dt_prev = dt_;
   dt_ = new_delta_time;
  
   return dt_prev;
}