#include "RFProtocolFactory.h"

IPCMessage* RFProtocolFactory::buildForType(int type) {
    switch (type) {
        case PORT_REGISTER:
            return new PortRegister();
        case PORT_CONFIG:
            return new PortConfig();
        case DATAPATH_CONFIG:
            return new DatapathConfig();
        case ROUTE_INFO:
            return new RouteInfo();
        case FLOW_MOD:
            return new FlowMod();
        case DATAPATH_PORT_REGISTER:
            return new DatapathPortRegister();
        case DATAPATH_DOWN:
            return new DatapathDown();
        case VIRTUAL_PLANE_MAP:
            return new VirtualPlaneMap();
        case DATA_PLANE_MAP:
            return new DataPlaneMap();
        case ROUTE_MOD:
            return new RouteMod();
        default:
            return NULL;
    }
}
