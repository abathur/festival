/*************************************************************************/
/*                                                                       */
/*                Centre for Speech Technology Research                  */
/*                     University of Edinburgh, UK                       */
/*                       Copyright (c) 2004                              */
/*                        All Rights Reserved.                           */
/*                                                                       */
/*  Permission is hereby granted, free of charge, to use and distribute  */
/*  this software and its documentation without restriction, including   */
/*  without limitation the rights to use, copy, modify, merge, publish,  */
/*  distribute, sublicense, and/or sell copies of this work, and to      */
/*  permit persons to whom this work is furnished to do so, subject to   */
/*  the following conditions:                                            */
/*   1. The code must retain the above copyright notice, this list of    */
/*      conditions and the following disclaimer.                         */
/*   2. Any modifications must be clearly marked as such.                */
/*   3. Original authors' names are not deleted.                         */
/*   4. The authors' names are not used to endorse or promote products   */
/*      derived from this software without specific prior written        */
/*      permission.                                                      */
/*                                                                       */
/*  THE UNIVERSITY OF EDINBURGH AND THE CONTRIBUTORS TO THIS WORK        */
/*  DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING      */
/*  ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT   */
/*  SHALL THE UNIVERSITY OF EDINBURGH NOR THE CONTRIBUTORS BE LIABLE     */
/*  FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES    */
/*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN   */
/*  AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,          */
/*  ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF       */
/*  THIS SOFTWARE.                                                       */
/*                                                                       */
/*************************************************************************/
/*                                                                       */
/*                          Author: Rob Clark                            */
/*                            Date: Jan  2004                            */
/* --------------------------------------------------------------------- */
/*                   Diphone backing off procedure                       */
/*************************************************************************/


#ifndef __DIPHONEBACKOFF_H__
#define __DIPHONEBACKOFF_H__

#include "siod.h"
#include "EST_types.h"
#include "ling_class/EST_Utterance.h"

class DiphoneBackoff {

 private:
  static const EST_String default_match;
  EST_StrListList backofflist;
  

 public:
  DiphoneBackoff(LISP l_backofflist);
  //~DiphoneBackoff();

  EST_String backoff(EST_String left, EST_String right);
  int backoff(EST_Item *left_phone);
  
  std::ostream& print(std::ostream &st = std::cout) const;
  friend std::ostream& operator << (std::ostream &st, const DiphoneBackoff &dbo);

 private:
  int is_defaultbackoff(const EST_Item *it) const;
  void set_defaultbackoff(EST_Item *it) const;
  int is_backoff(const EST_Item *it) const;
  void set_backoff(EST_Item *it) const;

};

#endif // __DIPHONEBACKOFF_H__

