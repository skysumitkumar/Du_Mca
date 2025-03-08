package com.sumit.quiz_service.controller;

import com.sumit.quiz_service.model.QuestionWrapper;
import com.sumit.quiz_service.model.QuizDto;
import com.sumit.quiz_service.model.Response;
import com.sumit.quiz_service.service.QuizService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("quiz")
public class QuizController {

    @Autowired
    public QuizService quizService;


    @PostMapping("create")
    public ResponseEntity<String> createQuiz(@RequestBody QuizDto quizDto) {
        return quizService.createQuiz(quizDto.getCategoryName(),quizDto.getNumQuestions(),quizDto.getTitle());
    }

    //previously we set the id when we call the create API
    //http://localhost:8765/quiz-service/quiz/get/2
    //http://localhost:8080/quiz/get/2
    @GetMapping("get/{id}")
    public ResponseEntity<List<QuestionWrapper>> getQuizQuestions(@PathVariable int id) {
        return quizService.getQuizQuestion(id);
    }

    @PostMapping("submit/{id}")
    public ResponseEntity<Integer> submitQuiz(@PathVariable int id,@RequestBody List<Response> responses)
    {
        return quizService.calculateResult(id,responses);
    }
}
