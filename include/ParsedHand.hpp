//
// Created by lucas on 12/06/19.
//

#ifndef GESTURE_PARSER_API_PARSEDHAND_HPP
#define GESTURE_PARSER_API_PARSEDHAND_HPP

namespace gesture_parser {
    class ParsedHand {
    private:
        static constexpr int MAX_ANGLE = 359;

        bool m_thumb;
        bool m_index;
        bool m_midlle;
        bool m_ring;
        bool m_pinky;

        // Angles are in degrees
        unsigned int m_roll;
        unsigned int m_pitch;
        unsigned int m_yaw;

        static int cleanDegree(double t_degree);

        static double cleanRadian(double t_radian);

    public:

        int position_x;
        int position_y;
        int position_z;

        ParsedHand();

        bool operator==(const ParsedHand &rhs) const;

        bool operator!=(const ParsedHand &rhs) const;

        bool isThumbExtended() const;

        bool isIndexExtended() const;

        bool isMiddleExtended() const;

        bool isRingExtended() const;

        bool isPinkyExtended() const;

        unsigned int getRollDegree() const;

        double getRollRadian() const;

        unsigned int getPitchDegree() const;

        double getPitchRadian() const;

        unsigned int getYawDegree() const;

        double getYawRadian() const;


        bool isHandOpen() const;

        bool ishandClosed() const;


        void setThumbExtended(bool t_isExtended);

        void setIndexExtended(bool t_isExtended);

        void setMiddleExtended(bool t_isExtended);

        void setRingExtended(bool t_isExtended);

        void setPinkyExtended(bool t_isExtended);


        void setRollDegree(double t_degree);

        void setRollRadian(double t_radian);

        void setPitchDegree(double t_degree);

        void setPitchRadian(double t_radian);

        void setYawDegree(double t_degree);

        void setYawRadian(double t_radian);
    };
}

#endif //GESTURE_PARSER_API_PARSEDHAND_HPP
