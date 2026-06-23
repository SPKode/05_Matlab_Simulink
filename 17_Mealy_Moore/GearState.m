classdef GearState < Simulink.IntEnumType
    enumeration
        R (3)
        P (1)
        N (2)
        D (4)
        O (5)
    end
    methods (Static)

        function retVal = getDefaultValue()
            retVal = GearState.P;
        end

        function retVal = getDescription()
            retVal = 'Vehicle Transmission Modes';
        end

        function retVal = getHeaderFile()
            retVal = 'GearState.h';
        end

        function retVal = getDataScope()
            retVal = 'Exported';
        end

        function retVal = addClassNameToEnumNames()
            retVal = true;
        end

    end
end