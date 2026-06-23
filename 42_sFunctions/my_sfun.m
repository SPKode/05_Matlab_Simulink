function my_sfun(block)
    setup(block);
end

function setup(block)

    block.NumInputPorts  = 1;
    block.NumOutputPorts = 1;

    block.SetPreCompInpPortInfoToDynamic();
    block.SetPreCompOutPortInfoToDynamic();

    block.SampleTimes = [0 0];

    block.RegBlockMethod('Outputs', @Outputs);

end

function Outputs(block)

    block.OutputPort(1).Data = block.InputPort(1).Data * 5;

end