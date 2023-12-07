function result = task_1_function(x, y)
    if x >= 0 && y >= 0
        result = (x + y);
    elseif x >= 0 && y < 0
        result = (x + y.^2);
    elseif x < 0 && y >= 0
        result = (x.^2 + y);
    else % x < 0 and y < 0
        result = (x.^2 + y.^2);
    end
end