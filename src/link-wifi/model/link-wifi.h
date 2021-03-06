/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
#ifndef LINK_WIFI_H
#define LINK_WIFI_H

#include "ns3/propagation-loss-model.h"
#include "ns3/mobility-model.h"

namespace ns3 {
class LinkWifi : public Object
/* ... */
public:
//  static TypeId GetTypeId (void);

  LinkWifi ();
  virtual ~LinkWifi ();

  static void calcRx(PropagationLossModel propagationLossModel, Ptr<MobilityModel> b){};       
}

#endif /* LINK_WIFI_H */

